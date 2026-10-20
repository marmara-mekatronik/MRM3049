/**
 * @file 04_jenerik_gosterici_void_pointer.cpp
 * @brief Tip-bağımsız jenerik işaretçi (void*) ve static_cast tür dönüşümü
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// Jenerik telemetri yazdırıcı: Gelen ham işaretçiyi belirtilen tipe göre dönüştürür
void paketYazdir(const void* ptr, char veriTipi) {
    if (ptr == nullptr) return;

    if (veriTipi == 'i') {
        const int* intPtr = static_cast<const int*>(ptr);
        std::cout << "Tam Sayı Telemetri : " << *intPtr << "\n";
    } else if (veriTipi == 'd') {
        const double* dblPtr = static_cast<const double*>(ptr);
        std::cout << "Analog Gerilim     : " << *dblPtr << " V\n";
    } else if (veriTipi == 'c') {
        const char* chrPtr = static_cast<const char*>(ptr);
        std::cout << "Durum Karakteri    : " << *chrPtr << "\n";
    }
}

int main() {
    int sayac = 1024;
    double gerilim = 4.95;
    char mod = 'A'; // Otomatik mod

    // void* her türlü veri adresini kabul eder
    paketYazdir(&sayac, 'i');
    paketYazdir(&gerilim, 'd');
    paketYazdir(&mod, 'c');

    return 0;
}
