/**
 * @file 14_mekatronik_kayan_ortalama_filtresi.cpp
 * @brief Mekatronik Uygulama: Gürültülü sensör verisi üzerinde Kayan Ortalama Filtresi (Moving Average Filter)
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>

const int PENCERE_BOYUTU = 5;

// Kayan ortalama filtresi veri yapisi
struct KayanOrtalamaFiltresi {
    double tampon[PENCERE_BOYUTU];
    int indis;
    int elemanSayisi;
    double toplam;

    void baslat() {
        indis = 0;
        elemanSayisi = 0;
        toplam = 0.0;
        for (int i = 0; i < PENCERE_BOYUTU; ++i) {
            tampon[i] = 0.0;
        }
    }

    // Yeni ornek ekle ve filtrelenmis degeri dondur
    double ornekEkle(double yeniDeger) {
        // Eski degeri toplamdan cikar
        toplam -= tampon[indis];
        // Yeni degeri tampona koy ve toplama ekle
        tampon[indis] = yeniDeger;
        toplam += yeniDeger;

        // Dairesel indis ilerletmesi
        indis = (indis + 1) % PENCERE_BOYUTU;

        if (elemanSayisi < PENCERE_BOYUTU) {
            elemanSayisi++;
        }

        return toplam / elemanSayisi;
    }
};

int main() {
    KayanOrtalamaFiltresi filtre;
    filtre.baslat();

    // Gurultulu ultrasonik mesafe sensoru ham okuma verileri (cm cinsinden)
    double hamMesafeVerileri[] = {
        50.2, 52.1, 48.9, 75.4 /* Gurultu / spike */, 51.0, 
        50.8, 49.5, 52.3, 51.1, 50.4
    };
    int veriSayisi = sizeof(hamMesafeVerileri) / sizeof(hamMesafeVerileri[0]);

    std::cout << "--- Kayan Ortalama Filtresi (Pencere Boyutu = " << PENCERE_BOYUTU << ") ---\n";
    std::cout << std::left << std::setw(8) << "Adim" 
              << std::setw(16) << "Ham Deger (cm)" 
              << "Filtrelenmis (cm)\n";
    std::cout << "-------------------------------------------\n";

    for (int t = 0; t < veriSayisi; ++t) {
        double ham = hamMesafeVerileri[t];
        double filtrelenmis = filtre.ornekEkle(ham);

        std::cout << "t = " << std::setw(4) << t 
                  << std::left << std::fixed << std::setprecision(2) 
                  << std::setw(16) << ham 
                  << filtrelenmis << "\n";
    }

    std::cout << "-------------------------------------------\n";
    std::cout << "Not: t=3 anindaki 75.4 cm ani gurultu darbesi basariyla yumusatildi.\n";

    return 0;
}
