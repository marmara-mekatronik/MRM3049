/**
 * @file 03_sabitler_ve_gostericiler.cpp
 * @brief const ve işaretçi kombinasyonları (Veriye sabit vs Adrese sabit)
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    // 1. Sabit Veriye İşaretçi (Pointer to Constant)
    // Veri kilitlidir, işaretçinin tuttuğu adres değiştirilebilir.
    const int* p1 = &a;
    // *p1 = 15; // DERLEME HATASI! Gösterilen veri değiştirilemez.
    p1 = &b;     // GEÇERLİ: p1 artık b değişkeninin adresini tutar.
    std::cout << "1. Sabit Veriye İşaretçi (*p1): " << *p1 << "\n";

    // 2. Sabit İşaretçi (Constant Pointer)
    // Adres kilitlidir, gösterilen verinin içeriği değiştirilebilir.
    int* const p2 = &a;
    *p2 = 35;    // GEÇERLİ: a değişkeninin değeri güncellenir.
    // p2 = &b;  // DERLEME HATASI! p2 işaretçisinin adresi değiştirilemez.
    std::cout << "2. Sabit İşaretçi (*p2): " << *p2 << " (a'nın yeni değeri: " << a << ")\n";

    // 3. Sabit Veriye Sabit İşaretçi (Constant Pointer to Constant)
    // Ne adres ne de veri değiştirilebilir; tam korumalı salt-okunurdur.
    const int* const p3 = &b;
    // *p3 = 40; // DERLEME HATASI!
    // p3 = &a;  // DERLEME HATASI!
    std::cout << "3. Sabit Veriye Sabit İşaretçi (*p3): " << *p3 << "\n";

    return 0;
}
