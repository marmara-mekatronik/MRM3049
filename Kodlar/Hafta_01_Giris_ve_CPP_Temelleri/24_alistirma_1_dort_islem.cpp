/**
 * @file 24_alistirma_1_dort_islem.cpp
 * @brief Alıştırma 1: Dört İşlem
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int sayi1, sayi2;
    std::cout << "Birinci sayıyı girin: ";
    std::cin >> sayi1;
    std::cout << "İkinci sayıyı girin: ";
    std::cin >> sayi2;

    int toplam = sayi1 + sayi2;
    int fark = sayi1 - sayi2;
    int carpim = sayi1 * sayi2;

    std::cout << "Toplam: " << toplam << "\n";
    std::cout << "Fark: " << fark << "\n";
    std::cout << "Çarpım: " << carpim << "\n";

    if (sayi2 != 0) {
        double bolum = static_cast<double>(sayi1) / sayi2;
        std::cout << "Bölüm: " << bolum << "\n";
    } else {
        std::cout << "Hata: Sıfıra bölme yapılamaz!\n";
    }

    return 0;
}
