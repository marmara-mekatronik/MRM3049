/**
 * @file 12_sabitler_const_anahtar_kelimesi.cpp
 * @brief Sabitler: const Anahtar Kelimesi
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    const double PI = 3.1415926535;
    const int MAKSIMUM_HIZ = 120; // devir/dakika
    
    // PI = 3.14; 
    // HATA: Salt okunur değişkene atama yapılamaz!
    
    int yaricap = 5;
    double cevre = 2 * PI * yaricap;
    
    std::cout << "Çevre: " << cevre << "\n";

    int istenenHiz = 150;
    if (istenenHiz > MAKSIMUM_HIZ) {
        std::cout << "HATA: Maksimum hız aşıldı!\n";
    }
    return 0;
}
