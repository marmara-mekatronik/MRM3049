/**
 * @file 21_girdi_hata_kontrolu_ve_arabellek_temizli.cpp
 * @brief Girdi Hata Kontrolü ve Arabellek Temizliği
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <limits>

int main() {
    int sayi;
    while (true) {
        std::cout << "Pozitif bir tam sayı girin: ";
        if (std::cin >> sayi) {
            break; // Geçerli girdi alındı
        }
        
        std::cout << "Hatalı girdi! Sayı bekleniyordu.\n";
        std::cin.clear(); // 1. Hata bayrağını sıfırla
        
        // 2. Hatalı karakterleri tampondan temizle:
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), 
            '\n'
        );
    }
    std::cout << "Başarıyla girilen sayı: " 
              << sayi << "\n";
    return 0;
}
