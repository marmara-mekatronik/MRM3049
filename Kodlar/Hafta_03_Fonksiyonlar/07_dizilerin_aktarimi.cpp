/**
 * @file 07_dizilerin_aktarimi.cpp
 * @brief Fonksiyonlara dizi aktarımı ve Dizi Bozunması (Array Decay)
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

// double arr[] yazımı, derleyici düzeyinde double* arr demektir.
// Dizi boyutu kaybolduğu için 'boyut' parametresi zorunludur!
double ortalamaHesapla(const double arr[], int boyut) {
    if (boyut <= 0) return 0.0;

    double toplam = 0.0;
    for (int i = 0; i < boyut; ++i) {
        toplam += arr[i];
    }
    return toplam / boyut;
}

int main() {
    std::cout << "=== Dizilerin Fonksiyonlara Aktarimi ===\n";

    double sensorVerileri[6] = {24.1, 24.5, 24.2, 25.0, 24.8, 24.4};
    int n = 6;

    double ort = ortalamaHesapla(sensorVerileri, n);
    std::cout << "Sensör Ortalama Değeri: " << ort << " C\n";

    return 0;
}
