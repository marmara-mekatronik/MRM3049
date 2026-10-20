/**
 * @file 10_birlik_ile_bayt_donusumu_type_punning.cpp
 * @brief Birlikler ile Type Punning: 32-bit float telemetri verisini 4 ham bayta parçalama
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>
#include <cstdint>

// 4 Baytlik float ve 4 elemanli uint8_t dizisini ayni bellege esleyen birlik
union FloatDonusturucu {
    float ondalikVeri;
    uint8_t baytlar[4];
};

int main() {
    FloatDonusturucu paket;
    paket.ondalikVeri = 36.65f; // Ornek sensor telemetri verisi

    std::cout << "--- Telemetri Gonderici (TX) Tarafi ---\n";
    std::cout << "Orijinal Float Deger: " << paket.ondalikVeri << "\n";
    std::cout << "Seri Porttan Gonderilecek 4 Bayt:\n";

    for (int i = 0; i < 4; ++i) {
        std::cout << "Bayt [" << i << "]: 0x" 
                  << std::hex << std::uppercase << std::setw(2) << std::setfill('0') 
                  << static_cast<int>(paket.baytlar[i]) 
                  << " (" << std::dec << static_cast<int>(paket.baytlar[i]) << ")\n";
    }

    // Alici (RX) Tarafinda baytlarin birlestirilmesi simülasyonu
    std::cout << "\n--- Telemetri Alici (RX) Tarafi ---\n";
    FloatDonusturucu alinanPaket;
    alinanPaket.baytlar[0] = paket.baytlar[0];
    alinanPaket.baytlar[1] = paket.baytlar[1];
    alinanPaket.baytlar[2] = paket.baytlar[2];
    alinanPaket.baytlar[3] = paket.baytlar[3];

    std::cout << "Baytlardan Geri Donusturulen Float: " << alinanPaket.ondalikVeri << "\n";

    return 0;
}
