/**
 * @file 13_hibrit_kaydedici_birlik_ve_bit_alani.cpp
 * @brief Birlik ve bit alanı hibrit mimarisi: Donanım portuna hem tek ham bayt hem de tekil bitler ile erişim
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>
#include <cstdint>

// Hibrit kaydedici: Ayni 8-bitlik alana hem ham uint8_t hem bit alanlari uzerinden erisilir
union DurumKaydedici {
    uint8_t hamDeger; // Tum kaydediciye tek seferde 8-bit erisim

    struct {
        uint8_t sistemHazir   : 1; // Bit 0
        uint8_t iletisimVar   : 1; // Bit 1
        uint8_t asiriAkim     : 1; // Bit 2
        uint8_t acilDurdurma  : 1; // Bit 3
        uint8_t rezerve       : 4; // Bit 4..7
    } bayraklar;
};

int main() {
    DurumKaydedici reg;

    // 1. Donanimdan (veya seri porttan) ham heksadesimal bayt okuma simülasyonu
    reg.hamDeger = 0x0D; // 0000 1101_2
    // Beklenen: sistemHazir=1, iletisimVar=0, asiriAkim=1, acilDurdurma=1

    std::cout << "--- Donanim Portundan Ham Okuma ---\n";
    std::cout << "Ham Kaydedici Bayti: 0x" 
              << std::hex << std::uppercase << static_cast<int>(reg.hamDeger) << "\n\n";

    std::cout << "--- Birlik ile Otomatik Cozumlenen Bit Bayraklari ---\n";
    std::cout << "Sistem Hazir    : " << (reg.bayraklar.sistemHazir ? "EVET" : "HAYIR") << "\n";
    std::cout << "Iletisim Var mi?: " << (reg.bayraklar.iletisimVar ? "EVET" : "HAYIR") << "\n";
    std::cout << "Asiri Akim      : " << (reg.bayraklar.asiriAkim ? "ALARM!" : "Normal") << "\n";
    std::cout << "Acil Durdurma   : " << (reg.bayraklar.acilDurdurma ? "AKTIF!" : "Pasif") << "\n\n";

    // 2. Bit duzeyinde guncelleme yaparak ham bayti degistirme
    std::cout << "--- Bit Duzeyinde Islemler ---\n";
    reg.bayraklar.asiriAkim = 0; // Alarmi temizle
    reg.bayraklar.iletisimVar = 1; // Iletisim bayragini ac

    std::cout << "Guncellenmis Ham Bayt Degeri: 0x" 
              << std::hex << static_cast<int>(reg.hamDeger) << " (0000 1011_2)\n";

    return 0;
}
