/**
 * @file 02_dizi_indisleme_ve_sinir_asimi.cpp
 * @brief Dizi elemanlarına erişim, sınır aşımı (out-of-bounds) ve savunmacı kodlama
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    const int KANAL_SAYISI = 4;
    int sensorKanallari[KANAL_SAYISI] = {120, 240, 360, 480};

    std::cout << "--- Gecerli Indislerle Erisim (0 ile " << KANAL_SAYISI - 1 << " arasi) ---\n";
    for (int i = 0; i < KANAL_SAYISI; ++i) {
        std::cout << "Kanal " << i << " Degeri: " << sensorKanallari[i] << "\n";
    }

    std::cout << "\n--- Savunmaci Sinir Kontrolu Ornegi ---\n";
    int talepEdilenIndis = 5; // Dizi sınırları dışında bir indis

    // C++ geleneksel dizilerde operator[] sınır denetimi YAPMAZ!
    // Bu nedenle sınır kontrolü programcı tarafından açıkça yapılmalıdır:
    if (talepEdilenIndis >= 0 && talepEdilenIndis < KANAL_SAYISI) {
        std::cout << "Kanal " << talepEdilenIndis << ": " 
                  << sensorKanallari[talepEdilenIndis] << "\n";
    } else {
        std::cerr << "HATA: Gecersiz kanal indisi (" << talepEdilenIndis << ")! "
                  << "Gecerli aralik: [0, " << KANAL_SAYISI - 1 << "]\n";
    }

    // Bilgi notu:
    std::cout << "\nNot: C++ dilinde dizi sinir asimi (out-of-bounds) 'Tanimsiz Davranis' (Undefined Behavior)\n"
              << "olusturur. Baska bir degiskenin belleginin bozulmasina veya segfault hatasina yol acabilir.\n";

    return 0;
}
