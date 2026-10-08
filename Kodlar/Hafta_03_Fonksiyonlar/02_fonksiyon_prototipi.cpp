/**
 * @file 02_fonksiyon_prototipi.cpp
 * @brief Fonksiyon prototipleri (bildirim) ve tanım ayrımı
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

// Fonksiyon Prototipleri (Forward Declaration)
double gerilimHesapla(double akim, double direnc);
double gucHesapla(double gerilim, double akim);

int main() {
    std::cout << "=== Fonksiyon Prototipleri ===\n";

    double i = 2.5;  // Amper
    double r = 10.0; // Ohm

    // Derleyici prototipleri bildiği için çağrıya sorunsuz izin verir
    double v = gerilimHesapla(i, r);
    double p = gucHesapla(v, i);

    std::cout << "Gerilim (V): " << v << " Volt\n";
    std::cout << "Guc (P)    : " << p << " Watt\n";

    return 0;
}

// Fonksiyon Gövdeleri (İmplementasyonlar)
double gerilimHesapla(double akim, double direnc) {
    return akim * direnc;
}

double gucHesapla(double gerilim, double akim) {
    return gerilim * akim;
}
