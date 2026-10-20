/**
 * @file 05_cok_boyutlu_diziler_ve_row_major.cpp
 * @brief Çok boyutlu diziler, Satır Öncelikli Düzen (Row-Major Order) ve fonksiyon aktarımı
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>

const int SATIR = 3;
const int SUTUN = 4;

// 2B diziyi fonksiyona aktarirken en azindan 2. boyut (sütun sayisi) belirtilmelidir!
// Derleyici Satir * SUTUN + Sutun formuluyle bellek ofsetini boyle hesaplar.
void matrisYazdir(const int matris[][SUTUN], int satirSayisi) {
    for (int i = 0; i < satirSayisi; ++i) {
        std::cout << "Satir " << i << ": [ ";
        for (int j = 0; j < SUTUN; ++j) {
            std::cout << std::setw(4) << matris[i][j] << " ";
        }
        std::cout << "]\n";
    }
}

int main() {
    // 3x4 Robot Eklem Koordinat Matrisi
    int koordinatMatrisi[SATIR][SUTUN] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {50, 60, 70, 80}
    };

    std::cout << "--- 1. Matris Formati (2 Boyutlu Gorunum) ---\n";
    matrisYazdir(koordinatMatrisi, SATIR);

    std::cout << "\n--- 2. Bellekteki Gercek Duzen (Row-Major Order / Ardisil Bellek) ---\n";
    // 2B matris fiziki bellekte tek boyutlu, kesintisiz bir blok olarak saklanir:
    const int* tekBoyutGezici = &koordinatMatrisi[0][0];
    int toplamEleman = SATIR * SUTUN;

    for (int k = 0; k < toplamEleman; ++k) {
        int satirIndis = k / SUTUN;
        int sutunIndis = k % SUTUN;
        std::cout << "Ofset " << std::setw(2) << k 
                  << " -> [" << satirIndis << "][" << sutunIndis << "] = " 
                  << std::setw(3) << *(tekBoyutGezici + k) 
                  << " (Adres: " << (tekBoyutGezici + k) << ")\n";
    }

    return 0;
}
