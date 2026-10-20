/**
 * @file 10_dinamik_vektor_std_vector.cpp
 * @brief Dinamik boyutlu dizi std::vector, boyut (size) vs kapasite (capacity) yönetimi
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <vector>

void vektorDurumunuYazdir(const std::string& etiket, const std::vector<int>& v) {
    std::cout << etiket << " -> Eleman Sayisi (size): " << v.size() 
              << " | Kapasite (capacity): " << v.capacity() << "\n";
}

int main() {
    std::vector<int> sensorVeriKuyrugu;

    std::cout << "--- 1. Dinamik Eleman Ekleme ve Kapasite Artisi ---\n";
    vektorDurumunuYazdir("Baslangic", sensorVeriKuyrugu);

    // Vektor boyut asiminda kapasitesini otomatik olarak katlayarak artirir (reallocation):
    for (int i = 1; i <= 6; ++i) {
        sensorVeriKuyrugu.push_back(i * 100);
        std::cout << "Eklendi: " << i * 100 << " | ";
        vektorDurumunuYazdir("", sensorVeriKuyrugu);
    }

    std::cout << "\n--- 2. Elemanlara Erisim ve Dongu ile Okuma ---\n";
    std::cout << "Kuyruktaki Elemanlar: ";
    for (const auto& veri : sensorVeriKuyrugu) {
        std::cout << veri << " ";
    }
    std::cout << "\n\n";

    // 3. Sondan eleman cikarma
    std::cout << "--- 3. pop_back() ile Son Elemani Cikarma ---\n";
    sensorVeriKuyrugu.pop_back();
    vektorDurumunuYazdir("pop_back() Sonrasi", sensorVeriKuyrugu);

    // 4. Tum elemanlari temizleme
    std::cout << "\n--- 4. clear() ile Temizleme ---\n";
    sensorVeriKuyrugu.clear();
    vektorDurumunuYazdir("clear() Sonrasi", sensorVeriKuyrugu);
    std::cout << "Not: clear() elemanlari siler fakat ayrilan kapasiteyi (heap) hemen birakmaz.\n";

    return 0;
}
