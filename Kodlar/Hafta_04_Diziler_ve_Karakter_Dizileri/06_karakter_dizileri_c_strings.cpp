/**
 * @file 06_karakter_dizileri_c_strings.cpp
 * @brief C-tarzı karakter dizileri (C-Strings), '\\0' sonlandırıcı ve <cstring> fonksiyonları
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <cstring>

int main() {
    // 1. C-string bildirimi ve otomatik null karakter ('\0') eklenmesi
    char modAdi[] = "OTONOM"; // 6 karakter + 1 null = 7 byte
    std::cout << "Mod Adi              : " << modAdi << "\n";
    std::cout << "Karakter Sayisi (strlen) : " << std::strlen(modAdi) << "\n";
    std::cout << "Bellek Boyutu (sizeof)   : " << sizeof(modAdi) << " byte\n\n";

    // 2. String kopyalama (strcpy)
    char hedefTampon[32];
    std::strcpy(hedefTampon, "MOTOR_AKTIF");
    std::cout << "Kopyalanan Metin     : " << hedefTampon << "\n";

    // 3. String birlestirme (strcat)
    std::strcat(hedefTampon, "_HIZ_100");
    std::cout << "Birlestirilen Metin  : " << hedefTampon << "\n";

    // 4. String karsilastirma (strcmp)
    char komut1[] = "START";
    char komut2[] = "START";
    char komut3[] = "STOP";

    std::cout << "\n--- strcmp() Karsilastirmalari ---\n";
    if (std::strcmp(komut1, komut2) == 0) {
        std::cout << "komut1 ve komut2 birbirine ESIT.\n";
    }

    if (std::strcmp(komut1, komut3) != 0) {
        std::cout << "komut1 ve komut3 FARKLI (Sonuc: " << std::strcmp(komut1, komut3) << ").\n";
    }

    // Bilgi notu:
    std::cout << "\nNot: C-string'lerde hedef tampon boyutu asilirsa bellek tasmasi (Buffer Overflow)\n"
              << "meydana gelir. Modern C++'ta std::string sinifinin kullanilmasi onerilir.\n";

    return 0;
}
