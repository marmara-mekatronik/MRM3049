/**
 * @file 18_guvenli_isim_alani_kullanimi.cpp
 * @brief Güvenli İsim Alanı Kullanımı
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// 1. Seçici Kullanım (Yalnızca gerekenleri dahil et)
using std::cout;
using std::endl;

// 2. Tip Takma Adı Oluşturma (Type Alias - Modern C++)
using TamSayi = int;
using GercekSayi = double;

int main() {
    TamSayi sayi{42};
    GercekSayi voltaj{12.4};
    
    cout << "Sayı: " << sayi << endl;
    cout << "Voltaj: " << voltaj << endl;
    return 0;
}
