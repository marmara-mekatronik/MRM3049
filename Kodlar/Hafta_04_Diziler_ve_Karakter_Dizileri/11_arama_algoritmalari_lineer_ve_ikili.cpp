/**
 * @file 11_arama_algoritmalari_lineer_ve_ikili.cpp
 * @brief Dizilerde arama algoritmaları: Doğrusal (Lineer) Arama ve İkili (Binary) Arama
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// 1. Dogrusal Arama (Linear Search) - Karmasiklik: O(N)
// Dizi sirali olmak zorunda degildir.
int dogrusalArama(const int dizi[], int boyut, int aranan) {
    for (int i = 0; i < boyut; ++i) {
        if (dizi[i] == aranan) {
            return i; // Bulunan elemanin indisi
        }
    }
    return -1; // Bulunamadi
}

// 2. Ikili Arama (Binary Search) - Karmasiklik: O(log N)
// ON SART: Dizi KESINLIKLE sirali olmalidir!
int ikiliArama(const int dizi[], int boyut, int aranan) {
    int sol = 0;
    int sag = boyut - 1;

    while (sol <= sag) {
        int orta = sol + (sag - sol) / 2; // Tasmasiz orta nokta hesabi

        if (dizi[orta] == aranan) {
            return orta; // Bulundu
        }

        if (dizi[orta] < aranan) {
            sol = orta + 1; // Sag yariya odaklan
        } else {
            sag = orta - 1; // Sol yariya odaklan
        }
    }
    return -1; // Bulunamadi
}

int main() {
    int sirasizDizi[] = {45, 12, 85, 32, 89, 21, 67};
    int sirasizBoyut = sizeof(sirasizDizi) / sizeof(sirasizDizi[0]);

    int siraliDizi[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int siraliBoyut = sizeof(siraliDizi) / sizeof(siraliDizi[0]);

    std::cout << "--- 1. Dogrusal Arama (Linear Search) ---\n";
    int aranan1 = 32;
    int sonuc1 = dogrusalArama(sirasizDizi, sirasizBoyut, aranan1);
    if (sonuc1 != -1) {
        std::cout << aranan1 << " degeri " << sonuc1 << ". indiste bulundu.\n";
    } else {
        std::cout << aranan1 << " bulunamadi.\n";
    }

    std::cout << "\n--- 2. Ikili Arama (Binary Search) ---\n";
    int aranan2 = 70;
    int sonuc2 = ikiliArama(siraliDizi, siraliBoyut, aranan2);
    if (sonuc2 != -1) {
        std::cout << aranan2 << " degeri " << sonuc2 << ". indiste bulundu.\n";
    } else {
        std::cout << aranan2 << " bulunamadi.\n";
    }

    return 0;
}
