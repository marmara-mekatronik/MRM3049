/**
 * @file 10_inline_fonksiyonlar_ve_makro.cpp
 * @brief inline fonksiyonlar vs #define makroları: Yan etki ve tür güvenliği karşılaştırması
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

// Tehlikeli makro (parantez eksikliği veya yan etki tuzağı)
#define MAKRO_KARE(x) ((x) * (x))

// Modern ve güvenli inline fonksiyon
inline double inlineKare(double x) {
    return x * x;
}

int main() {
    std::cout << "=== inline vs #define Makrolari ===\n";

    int a = 5;
    std::cout << "inlineKare(5) : " << inlineKare(a) << "\n";
    std::cout << "MAKRO_KARE(5) : " << MAKRO_KARE(a) << "\n";

    // Kritik Yan Etki Tuzağı Testi:
    int x1 = 5;
    int sonuc1 = inlineKare(x1++); // x1 yalnızca 1 kez artırılır
    std::cout << "inline(x1++) sonrasi x1 = " << x1 << ", sonuc = " << sonuc1 << "\n";

    int x2 = 5;
    int sonuc2 = MAKRO_KARE(x2++); // x2 İKİ KEZ artırılır! ((x2++) * (x2++))
    std::cout << "MAKRO(x2++) sonrasi x2  = " << x2 << ", sonuc = " << sonuc2 << " (TEHLIKELI!)\n";

    return 0;
}
