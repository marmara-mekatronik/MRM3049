/**
 * @file 07_fonksiyon_parametre_aktarimi_karsilastirma.cpp
 * @brief Değerle (value), işaretçiyle (pointer) ve referansla (reference) aktarım
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// 1. Değer ile Aktarım: Kopya üzerinde çalışır, orijinali değiştirmez
void degerleArtir(int x) {
    x += 10;
}

// 2. İşaretçi ile Aktarım: Adresi alır, nullptr kontrolü yapılmalıdır
void isaretciyleArtir(int* x) {
    if (x != nullptr) {
        *x += 10; // Orijinal bellek adresi güncellenir
    }
}

// 3. Referans ile Aktarım: Takma ad (alias) alır, doğrudan orijinali günceller
void referanslaArtir(int& x) {
    x += 10;
}

int main() {
    int sayi = 100;
    std::cout << "Başlangıç Değeri             : " << sayi << "\n\n";

    degerleArtir(sayi);
    std::cout << "1. Değerle Çağrı Sonrası      : " << sayi << " (Değişmedi)\n";

    isaretciyleArtir(&sayi);
    std::cout << "2. İşaretçiyle Çağrı Sonrası : " << sayi << " (Güncellendi)\n";

    referanslaArtir(sayi);
    std::cout << "3. Referansla Çağrı Sonrası   : " << sayi << " (Güncellendi)\n";

    return 0;
}
