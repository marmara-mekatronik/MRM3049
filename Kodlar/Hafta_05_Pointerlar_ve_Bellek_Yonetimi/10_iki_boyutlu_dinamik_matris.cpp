/**
 * @file 10_iki_boyutlu_dinamik_matris.cpp
 * @brief İki boyutlu dinamik dizi (matris) tahsisi ve ters sıra ile temizleme
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int satir = 3;
    int sutun = 4;

    std::cout << "Matris Boyutu: " << satir << "x" << sutun << "\n";

    // 1. Adım: Satır işaretçilerini tutan işaretçi dizisinin tahsisi
    int** matris = new int*[satir];

    // 2. Adım: Her bir satır için sütun dizilerinin tahsisi
    for (int i = 0; i < satir; ++i) {
        matris[i] = new int[sutun];
    }

    // Matris elemanlarını doldurma (i * sutun + j)
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            matris[i][j] = (i + 1) * 10 + (j + 1);
        }
    }

    // Matrisi ekrana yazdırma
    std::cout << "\n--- Dinamik Matris İçeriği ---\n";
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            std::cout << matris[i][j] << "\t";
        }
        std::cout << "\n";
    }

    // 3. Adım: Belleği TEMİZLEME (MUTLAKA Ters Sıra ile Yapılmalıdır!)
    // Önce her satırın sütun dizisi serbest bırakılır
    for (int i = 0; i < satir; ++i) {
        delete[] matris[i];
    }
    // En son ana satır işaretçileri tablosu serbest bırakılır
    delete[] matris;
    matris = nullptr;

    std::cout << "\nİki boyutlu dinamik matris belleği sızıntısız temizlendi.\n";
    return 0;
}
