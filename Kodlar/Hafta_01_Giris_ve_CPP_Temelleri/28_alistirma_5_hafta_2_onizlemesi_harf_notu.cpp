/**
 * @file 28_alistirma_5_hafta_2_onizlemesi_harf_notu.cpp
 * @brief Alıştırma 5 (Hafta 2 Önizlemesi): Harf Notu Belirleme
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int notDegeri;
    std::cout << "Notunuzu girin (0-100): ";
    std::cin >> notDegeri;

    if (notDegeri < 0 || notDegeri > 100) {
        std::cout << "Geçersiz not! 0-100 arası giriniz.\n";
    } else if (notDegeri >= 90) {
        std::cout << "Harf Notu: A\n";
    } else if (notDegeri >= 80) {
        std::cout << "Harf Notu: B\n";
    } else if (notDegeri >= 70) {
        std::cout << "Harf Notu: C\n";
    } else if (notDegeri >= 60) {
        std::cout << "Harf Notu: D\n";
    } else {
        std::cout << "Harf Notu: F\n";
    }

    return 0;
}
