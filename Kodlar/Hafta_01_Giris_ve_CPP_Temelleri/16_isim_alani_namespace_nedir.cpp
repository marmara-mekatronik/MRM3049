/**
 * @file 16_isim_alani_namespace_nedir.cpp
 * @brief İsim Alanı (Namespace) Nedir?
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

namespace Matematik {
    int topla(int a, int b) {
        return a + b;
    }
}

namespace Geometri {
    int topla(int a, int b) {
        return a + b; // Alanları toplar
    }
}

int main() {
    int x = Matematik::topla(3, 5);
    int y = Geometri::topla(10, 20);
    return 0;
}
