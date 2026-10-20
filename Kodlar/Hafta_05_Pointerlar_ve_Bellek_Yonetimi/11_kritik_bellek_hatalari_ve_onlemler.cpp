/**
 * @file 11_kritik_bellek_hatalari_ve_onlemler.cpp
 * @brief Bellek sızıntısı (leak), sarkan gösterici (dangling) ve çift serbest bırakma (double-free)
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// Hata 1: Bellek Sızıntısı Simülasyonu
void bellekSizintisiOrnegi() {
    int* geciciVeri = new int[100]; // Heap'ten 400 bayt ayrıldı
    geciciVeri[0] = 42;
    // delete[] geciciVeri; UNUTULDU!
    // Fonksiyon bitince geciciVeri stack'ten silinir, heap'teki 400 bayt sahipsiz kalır!
}

// Hata 2: Sarkan Gösterici ve Güvenli Önleme Deseni
void sarkanGostericiOnleme() {
    int* ptr = new int(99);
    delete ptr; // Bellek serbest bırakıldı, ptr hala o adresi gösteriyor (Dangling Pointer)

    // ÖNLEM: Silinir silinmez nullptr atanmalıdır!
    ptr = nullptr;

    if (ptr != nullptr) {
        std::cout << *ptr << "\n";
    } else {
        std::cout << "[ÖNLEM BAŞARILI] Sarkan göstericiye erişim engellendi (ptr == nullptr).\n";
    }
}

// Hata 3: Çift Serbest Bırakma (Double Free) Önleme
void ciftSilmeOnleme() {
    int* anaPtr = new int(50);
    delete anaPtr;
    anaPtr = nullptr; // nullptr yapıldığı için ikinci delete güvenlidir

    delete anaPtr; // delete nullptr; hiçbir işlem yapmaz ve çökmez!
    std::cout << "[ÖNLEM BAŞARILI] nullptr sayesinde çift serbest bırakma hatası önlendi.\n";
}

int main() {
    std::cout << "--- Kritik Bellek Hataları ve Savunmacı Önlemler ---\n";
    sarkanGostericiOnleme();
    ciftSilmeOnleme();
    return 0;
}
