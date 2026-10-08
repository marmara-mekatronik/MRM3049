/**
 * @file 01_fonksiyon_temelleri.cpp
 * @brief Fonksiyon tanımlama, geri dönüş tipleri ve guard clause mekanizması
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

// Değer döndüren fonksiyon (non-void)
double torkHesapla(double kuvvet, double yaricap) {
    if (kuvvet < 0.0 || yaricap < 0.0) {
        return 0.0; // Hatalı girdi koruması
    }
    return kuvvet * yaricap;
}

// Eylem gerçekleştiren fonksiyon (void)
void motoruDurdur(int motorPin) {
    if (motorPin < 0) {
        std::cout << "[HATA] Gecersiz motor pini!\n";
        return; // Guard clause ile erken çıkış
    }
    std::cout << "[DONANIM] Pin " << motorPin << " LOW seviyesine cekildi. Motor durduruldu.\n";
}

int main() {
    std::cout << "=== Fonksiyon Temelleri ===\n";
    
    double f = 25.5; // Newton
    double r = 0.4;  // Metre
    double tork = torkHesapla(f, r);
    std::cout << "Hesaplanan Tork: " << tork << " Nm\n";

    motoruDurdur(3);
    motoruDurdur(-1); // Hatalı pin denemesi

    return 0;
}
