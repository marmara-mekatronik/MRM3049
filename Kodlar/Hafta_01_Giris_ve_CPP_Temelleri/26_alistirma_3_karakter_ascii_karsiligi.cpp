/**
 * @file 26_alistirma_3_karakter_ascii_karsiligi.cpp
 * @brief Alıştırma 3: Karakter & ASCII Karşılığı
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    char karakter;
    std::cout << "Bir karakter girin: ";
    std::cin >> karakter;

    // char tipini tamsayıya dönüştürerek ASCII elde edilir
    int asciiKodu = static_cast<int>(karakter);

    std::cout << "Karakter: " << karakter << "\n";
    std::cout << "ASCII Karşılığı: " << asciiKodu << "\n";

    return 0;
}
