/**
 * @file 09_fonksiyon_asiri_yukleme.cpp
 * @brief Fonksiyon aşırı yükleme (Function Overloading) ve imza çözümleme
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

// 1. İki tamsayı toplama
int topla(int a, int b) {
    std::cout << "[topla(int, int)] ";
    return a + b;
}

// 2. İki kayan noktalı sayı toplama
double topla(double a, double b) {
    std::cout << "[topla(double, double)] ";
    return a + b;
}

// 3. Üç tamsayı toplama
int topla(int a, int b, int c) {
    std::cout << "[topla(int, int, int)] ";
    return a + b + c;
}

int main() {
    std::cout << "=== Fonksiyon Asiri Yukleme (Overloading) ===\n";

    std::cout << topla(3, 7) << "\n";
    std::cout << topla(3.14, 2.86) << "\n";
    std::cout << topla(10, 20, 30) << "\n";

    return 0;
}
