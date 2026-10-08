/**
 * @file 05_pass_by_reference.cpp
 * @brief Referansla parametre aktarımı (Pass by Reference) ve takas (swap)
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

// Referans (&): Orijinal değişkenin doğrudan takma adıdır (alias)
void takasRef(int& a, int& b) {
    int gecici = a;
    a = b;
    b = gecici;
}

int main() {
    std::cout << "=== Referansla Aktarim (Pass by Reference) ===\n";

    int x = 42;
    int y = 99;

    std::cout << "Takas oncesi -> x: " << x << ", y: " << y << "\n";

    // Pointer gibi '&' yazılmaz; değişken doğrudan aktarılır!
    takasRef(x, y);

    std::cout << "Takas sonrasi -> x: " << x << ", y: " << y << "\n";

    return 0;
}
