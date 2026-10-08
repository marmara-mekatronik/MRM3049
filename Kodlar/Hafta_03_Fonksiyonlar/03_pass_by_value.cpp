/**
 * @file 03_pass_by_value.cpp
 * @brief Değerle parametre aktarımı (Pass by Value) ve yerel kopya davranışı
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

void sifirlaKopya(int x) {
    std::cout << "  Fonksiyon ici (baslangic) x: " << x << "\n";
    x = 0; // Yalnızca 'sifirlaKopya' fonksiyonunun yerel kopyası değişir
    std::cout << "  Fonksiyon ici (atanan)    x: " << x << "\n";
}

int main() {
    std::cout << "=== Degerle Aktarim (Pass by Value) ===\n";

    int sayi = 100;
    std::cout << "Fonksiyon cagrisindan once sayi: " << sayi << "\n";

    sifirlaKopya(sayi);

    // Orijinal değişken ASLA değişmez!
    std::cout << "Fonksiyon cagrisindan sonra sayi: " << sayi << "\n";

    return 0;
}
