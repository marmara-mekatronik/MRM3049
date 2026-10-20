/**
 * @file 08_string_metin_arama_ve_parcalama.cpp
 * @brief std::string ile alt metin arama (find), çıkarma (substr) ve parçalama
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string seriVeri = "CMD:HIZ_AYARLA,VAL:1500,STATUS:OK";

    std::cout << "Gelen Seri Veri: " << seriVeri << "\n\n";

    // 1. find() ile alt metin arama
    std::string aranan = "VAL:";
    size_t konum = seriVeri.find(aranan);

    if (konum != std::string::npos) {
        std::cout << "--- 1. find() ve substr() ile Deger Ayiklama ---\n";
        std::cout << "'VAL:' bulundu, baslangic indisi: " << konum << "\n";

        // 'VAL:' ifadesinden sonra gelen degeri ayiklama
        size_t degerBaslangic = konum + aranan.length();
        size_t virgulKonumu = seriVeri.find(',', degerBaslangic);
        
        std::string hizDegeri = seriVeri.substr(degerBaslangic, virgulKonumu - degerBaslangic);
        std::cout << "Ayiklanan Hiz Degeri: " << hizDegeri << " RPM\n";
    }

    // 2. std::stringstream ile virgul bazli paket parcalama (Tokenizing)
    std::cout << "\n--- 2. stringstream ile Belirtec Parcalama (Tokenizing) ---\n";
    std::stringstream ss(seriVeri);
    std::string token;

    int tokenNo = 1;
    while (std::getline(ss, token, ',')) {
        std::cout << "Paket Parca " << tokenNo++ << ": " << token << "\n";
    }

    return 0;
}
