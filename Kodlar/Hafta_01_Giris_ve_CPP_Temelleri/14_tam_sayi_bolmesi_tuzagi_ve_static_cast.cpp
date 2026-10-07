/**
 * @file 14_tam_sayi_bolmesi_tuzagi_ve_static_cast.cpp
 * @brief Tam Sayı Bölmesi Tuzağı ve static_cast
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int a = 5;
    int b = 2;
    
    // 1. TUZAK: Tam sayı bölmesi
    double sonuc1 = a / b;
    std::cout << "sonuc1: " << sonuc1 
              << "\n"; // 2.0 yazar! (2.5 DEĞİL)
              
    // 2. ÇÖZÜM: static_cast ile açık dönüşüm
    double sonuc2 = static_cast<double>(a) / b;
    std::cout << "sonuc2: " << sonuc2 
              << "\n"; // 2.5 yazar (Doğru)
              
    return 0;
}
