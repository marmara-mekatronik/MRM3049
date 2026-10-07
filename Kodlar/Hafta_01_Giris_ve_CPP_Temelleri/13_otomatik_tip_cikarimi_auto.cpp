/**
 * @file 13_otomatik_tip_cikarimi_auto.cpp
 * @brief Otomatik Tip Çıkarımı: auto
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    auto sayi = 42;          // int
    auto oran = 3.14;        // double
    auto harf = 'M';         // char
    auto aktifMi = true;     // bool
    
    auto pi_f = 3.14f;       // float ('f' soneki ile)
    auto buyukSayi = 1000L;  // long ('L' soneki ile)
    
    std::cout << "oran boyutu: " 
              << sizeof(oran) << " byte\n"; // 8 yazar
    return 0;
}
