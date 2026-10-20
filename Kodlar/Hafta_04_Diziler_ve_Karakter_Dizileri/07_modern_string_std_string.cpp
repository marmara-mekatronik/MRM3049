/**
 * @file 07_modern_string_std_string.cpp
 * @brief Modern C++ std::string sınıfı, metotları ve dinamik bellek avantajları
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <string>

int main() {
    // 1. std::string olusturma ve ilklendirme
    std::string cihazKimlik = "ROBOT_KOL_01";
    std::string durum = "HAZIR";

    std::cout << "--- 1. Temel Bilgiler ---\n";
    std::cout << "Cihaz Kimligi   : " << cihazKimlik << "\n";
    std::cout << "Karakter Sayisi : " << cihazKimlik.length() << "\n";
    std::cout << "Bos mu? (empty) : " << (cihazKimlik.empty() ? "Evet" : "Hayir") << "\n\n";

    // 2. Kolay Birlestirme (operator+ ve operator+=)
    std::string telemetriPaketi = cihazKimlik + " | DURUM: " + durum;
    telemetriPaketi += " | PIL: %98";
    std::cout << "--- 2. Birlestirilmis Telemetri Mesaji ---\n";
    std::cout << telemetriPaketi << "\n\n";

    // 3. Karakter erisimi ve guncelleme
    std::cout << "Ilk Karakter    : " << telemetriPaketi[0] << "\n";
    telemetriPaketi[0] = 'M'; // Karakter modifikasyonu
    std::cout << "Guncellenmis Ilk: " << telemetriPaketi[0] << "\n\n";

    // 4. C-API Uyumlulugu: .c_str() ile const char* elde etme
    // Gomulu C kutuphanelerine veya isletim sistemi cagrilari icin gereklidir:
    const char* cTarziMetin = telemetriPaketi.c_str();
    std::cout << "--- 3. c_str() Fonksiyonu ile C-Uyumlulugu ---\n";
    std::cout << "C-Tarzi Ham Isaretci: " << cTarziMetin << "\n\n";

    // 5. Dogrudan operator== ile karsilastirma (strcmp'e gerek yok!)
    std::string gelenKomut = "BASLAT";
    if (gelenKomut == "BASLAT") {
        std::cout << "Sistem basariyla tetiklendi (operator== basarili).\n";
    }

    return 0;
}
