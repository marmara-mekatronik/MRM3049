/**
 * @file 25_alistirma_2_daire_alani_ve_cevresi.cpp
 * @brief Alıştırma 2: Daire Alanı ve Çevresi
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>

int main() {
    const double PI = 3.14159;
    double yaricap;

    std::cout << "Yarıçapı girin: ";
    std::cin >> yaricap;

    double alan = PI * yaricap * yaricap;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Dairenin alanı: " << alan << "\n";

    return 0;
}
