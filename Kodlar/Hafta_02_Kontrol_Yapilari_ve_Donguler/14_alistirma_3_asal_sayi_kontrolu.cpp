#include <iostream>

int main() {
    int sayi = 29;
    bool asalMi = true;

    if (sayi <= 1) {
        asalMi = false;
    } else {
        // Optimizasyon: sayi/2'ye kadar kontrol etmek yeterlidir
        for (int i = 2; i * i <= sayi; i++) {
            if (sayi % i == 0) {
                asalMi = false;
                break; // İlk bölende döngüyü kes
            }
        }
    }

    std::cout << "Test Edilen Sayı: " << sayi << "\n";
    if (asalMi) {
        std::cout << "Sonuç: Sayı ASALDIR.\n";
    } else {
        std::cout << "Sonuç: Sayı ASAL DEĞİLDİR.\n";
    }

    return 0;
}
