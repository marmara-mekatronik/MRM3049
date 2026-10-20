/**
 * @file 12_kabarcik_siralama_bubble_sort.cpp
 * @brief Kabarcık Sıralama (Bubble Sort) algoritması ve erken sonlandırma optimizasyonu
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <utility> // std::swap icin

void diziYazdir(const int dizi[], int boyut) {
    for (int i = 0; i < boyut; ++i) {
        std::cout << dizi[i] << " ";
    }
    std::cout << "\n";
}

// Kabarcık Sıralama - Karmasiklik: En kotu/Ortalama O(N^2), En iyi O(N)
void kabarcikSirala(int dizi[], int boyut) {
    for (int i = 0; i < boyut - 1; ++i) {
        bool yerDegistiMi = false;

        // Son i eleman zaten yerine oturmus durumdadir
        for (int j = 0; j < boyut - i - 1; ++j) {
            if (dizi[j] > dizi[j + 1]) {
                // Komsulari takas et
                std::swap(dizi[j], dizi[j + 1]);
                yerDegistiMi = true;
            }
        }

        // Optimizasyon: Eger hic takas yapilmadiysa dizi zaten siralidir
        if (!yerDegistiMi) {
            std::cout << "(Dizi " << i + 1 << ". adimda erken sonlandirma ile sirali bulundu)\n";
            break;
        }
    }
}

int main() {
    int sensorOlcumleri[] = {64, 34, 25, 12, 22, 11, 90};
    int boyut = sizeof(sensorOlcumleri) / sizeof(sensorOlcumleri[0]);

    std::cout << "--- Kabarcik Siralama (Bubble Sort) ---\n";
    std::cout << "Sirasiz Dizi : ";
    diziYazdir(sensorOlcumleri, boyut);

    kabarcikSirala(sensorOlcumleri, boyut);

    std::cout << "Sirali Dizi  : ";
    diziYazdir(sensorOlcumleri, boyut);

    return 0;
}
