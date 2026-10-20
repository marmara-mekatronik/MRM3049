/**
 * @file 06_isaretci_aritmetigi_ve_dizi_taramasi.cpp
 * @brief İşaretçi aritmetiği matematiği ve dizi-işaretçi bozunması (array decaying)
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int adc[4] = {512, 620, 715, 804};
    int* ptr = adc; // Dizi adı, ilk elemanın sabit adresidir (&adc[0])

    std::cout << "--- 1. Standart İndisleme ile Erişim ---\n";
    for (int i = 0; i < 4; ++i) {
        std::cout << "adc[" << i << "] = " << adc[i] 
                  << " (Bellek Adresi: " << &adc[i] << ")\n";
    }

    std::cout << "\n--- 2. İşaretçi Aritmetiği ile Erişim *(ptr + i) ---\n";
    for (int i = 0; i < 4; ++i) {
        // ptr + i adresi: ptr + (i * sizeof(int)) olarak hesaplanır (+4 bayt)
        std::cout << "*(ptr + " << i << ") = " << *(ptr + i)
                  << " (Hesaplanan Adres: " << (ptr + i) << ")\n";
    }

    std::cout << "\n--- 3. Gezici İşaretçi ile Tarama (ptr++) ---\n";
    int* gezici = adc;
    for (int i = 0; i < 4; ++i) {
        std::cout << "Gezici Değer: " << *gezici << "\n";
        gezici++; // Sonraki tamsayı hücresine ilerler
    }

    // İşaretçi farkı: Aradaki eleman sayısını verir
    std::cout << "\nİki Gösterici Arasındaki Eleman Sayısı: " << (gezici - adc) << "\n";

    return 0;
}
