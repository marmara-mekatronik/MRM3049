/**
 * @file 10_ilklendirilmemis_degiskenler_ve_tanimsiz.cpp
 * @brief İlklendirilmemiş Değişkenler ve Tanımsız Davranış
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int sayac; // İLK DEĞER VERİLMEDİ!
    
    std::cout << "Sayaç: " << sayac 
              << std::endl;
              
    sayac = sayac + 1;
    std::cout << "Yeni Sayaç: " << sayac 
              << std::endl;
    return 0;
}
