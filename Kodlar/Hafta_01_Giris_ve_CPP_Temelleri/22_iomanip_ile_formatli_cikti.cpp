/**
 * @file 22_iomanip_ile_formatli_cikti.cpp
 * @brief <iomanip> ile Formatlı Çıktı
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip> // Format manipülatörleri

int main() {
    double pi = 3.1415926535;
    
    // Sabit ondalıklı ve 2 basamak:
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Pi (2 basamak): " << pi 
              << "\n"; // 3.14
              
    std::cout << std::setprecision(4);
    std::cout << "Pi (4 basamak): " << pi 
              << "\n"; // 3.1416
              
    // Sütun Hizalama:
    std::cout << std::setw(10) << "Ürün" 
              << std::setw(8)  << "Fiyat" << "\n";
    std::cout << std::setw(10) << "Motor" 
              << std::setw(8)  << 250.50 << "\n";
    return 0;
}
