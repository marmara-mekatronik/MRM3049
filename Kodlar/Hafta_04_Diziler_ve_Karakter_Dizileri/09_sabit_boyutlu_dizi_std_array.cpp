/**
 * @file 09_sabit_boyutlu_dizi_std_array.cpp
 * @brief Modern C++11 std::array konteyneri, .at() ile sınır denetimi ve istisna yakalama
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <array>
#include <stdexcept>

// std::array fonksiyona aktarilirken boyutu kaybetmez (decaying olmaz!)
void diziBilgisiYazdir(const std::array<int, 4>& arr) {
    std::cout << "[Fonksiyon] Dizi Eleman Sayisi: " << arr.size() << "\n";
    std::cout << "[Fonksiyon] Elemanlar: ";
    for (const auto& eleman : arr) {
        std::cout << eleman << " ";
    }
    std::cout << "\n";
}

int main() {
    // Sabit boyutlu, stack üzerinde tutulan güvenli modern dizi
    std::array<int, 4> motorTorklari = {120, 185, 240, 310};

    std::cout << "--- 1. std::array Temel Ozellikleri ---\n";
    std::cout << "Eleman Sayisi : " << motorTorklari.size() << "\n";
    std::cout << "Bos mu?       : " << (motorTorklari.empty() ? "Evet" : "Hayir") << "\n";
    std::cout << "Ilk Eleman    : " << motorTorklari.front() << " Nm\n";
    std::cout << "Son Eleman    : " << motorTorklari.back() << " Nm\n\n";

    std::cout << "--- 2. Fonksiyona Guvenli Aktarim (Decay Olmaz) ---\n";
    diziBilgisiYazdir(motorTorklari);

    std::cout << "\n--- 3. .at() ile Sinir Guvenligi ve Istisna Yonetimi ---\n";
    try {
        std::cout << "Gecerli Erisim [2] : " << motorTorklari.at(2) << " Nm\n";
        std::cout << "Gecersiz Erisim [10] deneniyor...\n";
        // .at() sinir disina cikildiginda std::out_of_range istisnasi firlatir:
        std::cout << motorTorklari.at(10) << "\n";
    } catch (const std::out_of_range& e) {
        std::cerr << "YAKALANAN HATA: " << e.what() << "\n";
        std::cerr << "std::array .at() metodu bellek ihlalini basariyla engelledi.\n";
    }

    return 0;
}
