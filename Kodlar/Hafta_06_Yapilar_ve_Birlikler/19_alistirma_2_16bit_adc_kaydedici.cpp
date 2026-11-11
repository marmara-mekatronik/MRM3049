/**
 * @file 19_alistirma_2_16bit_adc_kaydedici.cpp
 * @brief Laboratuvar Alıştırması 2: 16-Bit ADC Donanım Kaydedicisi ve Bit Alanı Çözümleme
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>
#include <cstdint>

union AdcKaydedici16 {
    uint16_t hamKelime; // 16-bit (2 Bayt) toplu erişim
    struct {
        uint16_t adcDegeri : 12; // Bit 0..11  (0 - 4095)
        uint16_t kanalNo   : 3;  // Bit 12..14 (0 - 7)
        uint16_t hazir     : 1;  // Bit 15     (0 veya 1)
    } alanlar;
};

int main() {
    AdcKaydedici16 adc{};
    adc.alanlar.adcDegeri = 2048; // Yarı ölçek (~1.65V)
    adc.alanlar.kanalNo   = 3;    // Kanal 3
    adc.alanlar.hazir     = 1;    // Ölçüm hazır

    std::cout << "Kaydedici Boyutu : " << sizeof(AdcKaydedici16) << " Bayt\n";
    std::cout << "16-Bit Hex Deger : 0x" << std::hex << std::uppercase
              << adc.hamKelime << std::dec << "\n";
    std::cout << "Durum (Hazir)    : " << (adc.alanlar.hazir ? "EVET" : "HAYIR") << "\n";
    std::cout << "Kanal Numarasi   : " << adc.alanlar.kanalNo << "\n";
    std::cout << "Ham ADC Degeri   : " << adc.alanlar.adcDegeri << " / 4095\n";
    std::cout << "Olculen Gerilim  : " << std::fixed << std::setprecision(2)
              << (adc.alanlar.adcDegeri * 3.3 / 4095.0) << " V\n";

    return 0;
}

