/**
 * @file 27_alistirma_4_hafta_2_onizlemesi_sayi_isar.cpp
 * @brief Alıştırma 4 (Hafta 2 Önizlemesi): Sayı İşareti Kontrolü
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int sayi;
    std::cout << "Bir sayı girin: ";
    std::cin >> sayi;

    if (sayi > 0) {
        std::cout << "Sayı pozitiftir.\n";
    } else if (sayi < 0) {
        std::cout << "Sayı negatiftir.\n";
    } else {
        std::cout << "Sayı sıfırdır.\n";
    }

    return 0;
}
