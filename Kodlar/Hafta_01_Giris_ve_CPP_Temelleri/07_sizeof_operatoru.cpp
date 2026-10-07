/**
 * @file 07_sizeof_operatoru.cpp
 * @brief sizeof Operatörü
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    std::cout << "bool   : " << sizeof(bool) 
              << " byte\n";
    std::cout << "char   : " << sizeof(char) 
              << " byte\n";
    std::cout << "int    : " << sizeof(int) 
              << " byte\n";
    std::cout << "float  : " << sizeof(float) 
              << " byte\n";
    std::cout << "double : " << sizeof(double) 
              << " byte\n";
    return 0;
}
