/**
 * @file 23_hata_akisi_std_cerr_vs_std_cout.cpp
 * @brief Hata Akışı: std::cerr vs std::cout
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int pay = 10, payda = 0;
    
    if (payda == 0) {
        // Standart hata akışı:
        std::cerr << "[HATA]: Payda sıfır olamaz!" 
                  << std::endl;
        return 1; // Hata kodu ile çıkış
    }
    
    std::cout << "Sonuc: " << pay / payda << "\n";
    return 0;
}
