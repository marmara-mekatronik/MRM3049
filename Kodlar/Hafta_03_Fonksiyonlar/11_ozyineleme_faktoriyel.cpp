/**
 * @file 11_ozyineleme_faktoriyel.cpp
 * @brief Özyineleme (Recursion): Taban durum, özyinelemeli adım ve stack derinliği
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

long long faktoriyel(int n) {
    // 1. Taban Durum (Base Case)
    if (n <= 1) {
        return 1;
    }
    // 2. Özyinelemeli Adım (Recursive Step)
    return n * faktoriyel(n - 1);
}

int main() {
    std::cout << "=== Ozyinelemeli Faktoriyel ===\n";

    for (int i = 0; i <= 10; ++i) {
        std::cout << i << "! = " << faktoriyel(i) << "\n";
    }

    return 0;
}
