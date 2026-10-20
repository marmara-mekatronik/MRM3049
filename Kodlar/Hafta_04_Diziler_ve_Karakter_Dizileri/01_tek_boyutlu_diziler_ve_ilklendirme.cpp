/**
 * @file 01_tek_boyutlu_diziler_ve_ilklendirme.cpp
 * @brief Tek boyutlu dizilerin bildirimi, bellekte ardışıl yerleşimi ve ilklendirme yöntemleri
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>

int main() {
    // 1. Bildirim ve tam ilklendirme (Full initialization)
    int sensorHamVeri[5] = {102, 204, 308, 412, 515};

    // 2. Kısmi ilklendirme (Geri kalan elemanlar otomatik olarak 0 yapılır)
    int sayaclar[5] = {10, 20}; // sayaclar[2], sayaclar[3], sayaclar[4] = 0

    // 3. Sıfırla ilklendirme (Zero-initialization)
    float sicakliklar[4] = {0.0f}; // Tum elemanlar 0.0f olur

    // 4. Boyut belirtmeden derleyicinin eleman sayısını çıkarması
    int motorHizlari[] = {1000, 1500, 2000, 2500};
    int elemanSayisi = sizeof(motorHizlari) / sizeof(motorHizlari[0]);

    std::cout << "--- 1. sensorHamVeri Elemanlari ve Bellek Adresleri ---\n";
    std::cout << std::left << std::setw(8) << "Indis" 
              << std::setw(12) << "Deger" 
              << "Bellek Adresi (&)\n";
    std::cout << "-------------------------------------------\n";

    for (int i = 0; i < 5; ++i) {
        std::cout << "[" << i << "]     " 
                  << std::left << std::setw(12) << sensorHamVeri[i] 
                  << &sensorHamVeri[i] << "\n";
    }

    std::cout << "\nToplam dizi boyutu (byte)   : " << sizeof(sensorHamVeri) << "\n";
    std::cout << "Tek bir eleman boyutu (byte): " << sizeof(sensorHamVeri[0]) << "\n";

    std::cout << "\n--- 2. Kismi Ilklendirilmis Dizi (sayaclar) ---\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "sayaclar[" << i << "] = " << sayaclar[i] << "\n";
    }

    std::cout << "\n--- 3. Sifirla Ilklendirilmis Dizi (sicakliklar) ---\n";
    std::cout << "sicakliklar[0] = " << sicakliklar[0] << " C\n";

    std::cout << "\n--- 3. Boyutu Otomatik Cikarilan Dizi (motorHizlari) ---\n";
    std::cout << "Hesaplanan Eleman Sayisi: " << elemanSayisi << "\n";
    for (int i = 0; i < elemanSayisi; ++i) {
        std::cout << "motorHizlari[" << i << "] = " << motorHizlari[i] << " RPM\n";
    }

    return 0;
}
