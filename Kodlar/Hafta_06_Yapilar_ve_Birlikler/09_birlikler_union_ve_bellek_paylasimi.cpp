/**
 * @file 09_birlikler_union_ve_bellek_paylasimi.cpp
 * @brief Birlikler (Union), ortak bellek alanı, tek aktif üye ilkesi ve sizeof hesabı
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

union OrtakTampon {
    int tamsayi;     // 4 byte
    float ondalik;   // 4 byte
    char karakter;   // 1 byte
};

struct NormalYapi {
    int tamsayi;     // 4 byte
    float ondalik;   // 4 byte
    char karakter;   // 1 byte
};

int main() {
    std::cout << "--- 1. Bellek Boyutu Karsilastirmasi ---\n";
    std::cout << "sizeof(NormalYapi) : " << sizeof(NormalYapi) << " bayt (Tum uyeler icin ayri yer + dolgu)\n";
    std::cout << "sizeof(OrtakTampon): " << sizeof(OrtakTampon) << " bayt (Yalnizca en buyuk uye kadar)\n\n";

    OrtakTampon tampon;

    std::cout << "--- 2. Bellek Adresleri (Cakisma Kaniti) ---\n";
    std::cout << "&tampon.tamsayi  : " << &tampon.tamsayi << "\n";
    std::cout << "&tampon.ondalik  : " << &tampon.ondalik << "\n";
    std::cout << "(void*)&tampon.karakter: " << (void*)&tampon.karakter << "\n";
    std::cout << "Tum uyeler KESINLIKLE ayni bellek baslangic adresine sahiptir!\n\n";

    std::cout << "--- 3. Tek Aktif Uye Davranisi ---\n";
    tampon.tamsayi = 42;
    std::cout << "tamsayi atandi -> tampon.tamsayi = " << tampon.tamsayi << "\n";

    // ondalik uyeye yazildiginda ayni bellek uzerine yazilacagi icin tamsayi bozulur
    tampon.ondalik = 3.14159f;
    std::cout << "ondalik atandi -> tampon.ondalik = " << tampon.ondalik << "\n";
    std::cout << "Eski tamsayi artik gecersizdir -> tampon.tamsayi = " << tampon.tamsayi << "\n";

    return 0;
}
