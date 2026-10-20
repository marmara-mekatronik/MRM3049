/**
 * @file 04_fonksiyonlara_dizi_aktarimi_ve_decaying.cpp
 * @brief Fonksiyonlara dizi aktarımı, Array-to-Pointer Decay ve boyut parametresi zorunluluğu
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// Dizi parametresi "const int dizi[]" seklinde yazilsa bile, derleyici tarafindan 
// otomatik olarak "const int* dizi" olarak ele alinir.
// Bu duruma "Array-to-Pointer Decay" (Dizinin İsaretciye Bozunmasi) denir.
void diziYazdirVeBoyutGoster(const int* dizi, int boyut) {
    std::cout << "[Fonksiyon Ici] sizeof(dizi) (Isaretci boyutu): " << sizeof(dizi) << " byte\n";
    std::cout << "               (Parametre dizi[] yazilsa dahi derleyici isaretciye cevirir)\n";
    std::cout << "[Fonksiyon Ici] Aktarilan Eleman Sayisi      : " << boyut << "\n";
    std::cout << "[Fonksiyon Ici] Elemanlar: ";
    for (int i = 0; i < boyut; ++i) {
        std::cout << dizi[i] << " ";
    }
    std::cout << "\n";
}

// Ortalama hesaplayan ornek fonksiyon (const int* ile dizi korunur)
double ortalamaHesapla(const int* dizi, int boyut) {
    if (boyut <= 0) return 0.0;
    long toplam = 0;
    for (int i = 0; i < boyut; ++i) {
        toplam += dizi[i];
    }
    return static_cast<double>(toplam) / boyut;
}

int main() {
    int olcumler[5] = {12, 24, 36, 48, 60};
    int elemanSayisi = sizeof(olcumler) / sizeof(olcumler[0]);

    std::cout << "--- main() Kapsaminda Dizi Boyutu ---\n";
    std::cout << "sizeof(olcumler) (Tum dizi boyutu): " << sizeof(olcumler) << " byte\n";
    std::cout << "Hesaplanan Eleman Sayisi         : " << elemanSayisi << "\n\n";

    std::cout << "--- Fonksiyona Dizi Aktarimi ---\n";
    diziYazdirVeBoyutGoster(olcumler, elemanSayisi);

    std::cout << "\n--- Ortalama Hesabi ---\n";
    std::cout << "Olcumler Ortalamasi: " << ortalamaHesapla(olcumler, elemanSayisi) << "\n";

    return 0;
}
