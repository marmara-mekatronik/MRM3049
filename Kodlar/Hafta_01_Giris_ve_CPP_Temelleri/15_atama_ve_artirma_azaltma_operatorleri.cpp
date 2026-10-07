/**
 * @file 15_atama_ve_artirma_azaltma_operatorleri.cpp
 * @brief Atama ve Artırma/Azaltma Operatörleri
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int x = 10;
    x += 5; // x = x + 5 (15)
    x *= 2; // x = x * 2 (30)
    
    int a = 5;
    int b = ++a; // Önce artır, sonra ata
    // a = 6, b = 6
    
    int c = 5;
    int d = c++; // Önce ata, sonra artır
    // c = 6, d = 5
    
    std::cout << "b: " << b << ", d: " << d << "\n";
    return 0;
}
