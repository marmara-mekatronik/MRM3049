/**
 * @file 09_dinamik_dizi_new_delete_array.cpp
 * @brief Çalışma zamanında belirlenen boyutta dinamik dizi (new[] ve delete[])
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int kanalSayisi = 5; // Çalışma zamanında kullanıcıdan veya sensörden alınabilir
    std::cout << "Tahsis Edilecek Sensör Kanal Sayısı: " << kanalSayisi << "\n";

    // 1. Heap üzerinde dinamik dizi tahsisi (new[])
    double* telemetri = new double[kanalSayisi];

    // Dizi elemanlarını ilklendirme
    for (int i = 0; i < kanalSayisi; ++i) {
        telemetri[i] = (i + 1) * 1.15; // Örnek voltaj verileri
    }

    std::cout << "\n--- Dinamik Dizi Elemanları ---\n";
    for (int i = 0; i < kanalSayisi; ++i) {
        std::cout << "Kanal [" << i << "]: " << telemetri[i] << " V\n";
    }

    // 2. Dinamik Diziyi Serbest Bırakma (MUTLAKA delete[] KULLANILMALIDIR!)
    delete[] telemetri;

    // 3. Göstericiyi sıfırlama
    telemetri = nullptr;

    std::cout << "\nDinamik dizi delete[] ile güvenle temizlendi.\n";
    return 0;
}
