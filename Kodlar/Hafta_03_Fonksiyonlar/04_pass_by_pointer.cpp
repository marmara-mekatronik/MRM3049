/**
 * @file 04_pass_by_pointer.cpp
 * @brief İşaretçi ile parametre aktarımı (Pass by Pointer) ve deferans
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

void sifirlaPtr(int* ptr) {
    if (ptr == nullptr) {
        std::cout << "  [HATA] Null isaretci gonderildi!\n";
        return;
    }
    // Deferans (*) operatörü ile adresteki asıl hücreye erişilir
    *ptr = 0;
}

int main() {
    std::cout << "=== Isaretci ile Aktarim (Pass by Pointer) ===\n";

    int sayi = 100;
    std::cout << "Fonksiyon cagrisindan once: " << sayi << "\n";

    // Adres operatörü (&) ile değişkenin bellek adresi iletilir
    sifirlaPtr(&sayi);

    std::cout << "Fonksiyon cagrisindan sonra: " << sayi << " (Degisti!)\n";

    // Güvenlik testi: nullptr aktarımı
    sifirlaPtr(nullptr);

    return 0;
}
