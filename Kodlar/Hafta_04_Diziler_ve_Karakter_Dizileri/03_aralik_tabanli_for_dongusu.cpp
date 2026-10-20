/**
 * @file 03_aralik_tabanli_for_dongusu.cpp
 * @brief C++11 Aralık Tabanlı for (Range-based for) döngüsü ve referans kullanımı
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    double gerilimler[] = {3.31, 4.98, 11.95, 23.88};

    std::cout << "--- 1. Salt Okunur Erisim (const auto& - Bellek Tasarrufu ve Guvenlik) ---\n";
    // Elemanlar kopyalanmaz, orijinal veriye const referans üzerinden erisilir
    for (const auto& volt : gerilimler) {
        std::cout << "Gerilim Degeri: " << volt << " V\n";
    }

    std::cout << "\n--- 2. Elemanlari Modifiye Etme (auto& - Referans ile Guncelleme) ---\n";
    // Referans ile erisilerek dizi elemanlari %5 kalibrasyon ofseti ile carpilir
    for (auto& volt : gerilimler) {
        volt *= 1.05; // Tum degerleri %5 artir
    }

    std::cout << "\n--- 3. Guncellenmis Elemanlarin Listelenmesi ---\n";
    for (const auto& volt : gerilimler) {
        std::cout << "Kalibre Edilmis Gerilim: " << volt << " V\n";
    }

    std::cout << "\n--- 4. Degerle Kopyalama Riski (auto x : dizi) ---\n";
    int sayilar[] = {1, 2, 3};
    for (auto x : sayilar) {
        x += 100; // x sadece yerel bir kopyadir, orijinal sayilar dizisi degismez!
        std::cout << "Yerel kopya x: " << x << " | ";
    }
    std::cout << "\nKopyalama sonrasi sayilar[0]: " << sayilar[0] << " (Degismedi)\n";

    return 0;
}
