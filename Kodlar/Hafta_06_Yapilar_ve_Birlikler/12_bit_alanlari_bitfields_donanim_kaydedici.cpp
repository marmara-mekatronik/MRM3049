/**
 * @file 12_bit_alanlari_bitfields_donanim_kaydedici.cpp
 * @brief Bit Alanları (Bit-fields) ile mikrodenetleyici donanım kontrol kaydedicisi modelleme
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <cstdint>

// 1 Baytlik (8-bit) Motor Donanim Kaydedici Semasi
struct MotorKontrolKaydi {
    uint8_t motorDevrede : 1; // Bit 0: 0=Kapali, 1=Acik
    uint8_t yonIleri     : 1; // Bit 1: 0=Geri, 1=Ileri
    uint8_t frenUygula   : 1; // Bit 2: 0=Fren Yok, 1=Kilitli Fren
    uint8_t hizKademesi  : 3; // Bit 3..5: 0 ile 7 arasi kademe
    uint8_t hataDurumu   : 2; // Bit 6..7: 0=Normal, 1=AsiriAkim, 2=AsiriIsi, 3=VoltajDusuk
};

int main() {
    MotorKontrolKaydi reg;
    
    // Bit alanlarina dogrudan degisken atar gibi deger verilir:
    reg.motorDevrede = 1;
    reg.yonIleri = 1;
    reg.frenUygula = 0;
    reg.hizKademesi = 6; // 3 bitlik maksimum 7 alabilir
    reg.hataDurumu = 0;

    std::cout << "--- 1 Baytlik Bit Alani Kaydedici Durumu ---\n";
    std::cout << "Motor Devrede mi?: " << static_cast<int>(reg.motorDevrede) << "\n";
    std::cout << "Donus Yonu       : " << (reg.yonIleri ? "ILERI" : "GERI") << "\n";
    std::cout << "Fren Durumu      : " << (reg.frenUygula ? "AKTIF" : "PASIF") << "\n";
    std::cout << "Hiz Kademesi     : " << static_cast<int>(reg.hizKademesi) << " (0-7 arasi)\n";
    std::cout << "Hata Durumu      : " << static_cast<int>(reg.hataDurumu) << "\n\n";

    std::cout << "Kaydedicinin Fiziki Bellek Boyutu: " << sizeof(MotorKontrolKaydi) << " bayt!\n";

    // Hiz kademesini sinirlandirma denemesi
    reg.hizKademesi = 7;
    std::cout << "Maksimum Hiz Kademesi Ayarlandi: " << static_cast<int>(reg.hizKademesi) << "\n";

    return 0;
}
