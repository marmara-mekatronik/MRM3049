/**
 * @file 01_isaretci_tanimlama_ve_deferans.cpp
 * @brief İşaretçi (pointer) kavramı, adres (&) ve deferans (*) operatörleri
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int sensorVerisi = 100;
    int* ptr = &sensorVerisi; // sensorVerisi'nin adresini işaretçiye ata

    std::cout << "--- İşaretçi Temel Bilgileri ---\n";
    std::cout << "sensorVerisi Değeri        : " << sensorVerisi << "\n";
    std::cout << "sensorVerisi Adresi (&)    : " << &sensorVerisi << "\n";
    std::cout << "ptr Değeri (Tuttuğu Adres) : " << ptr << "\n";
    std::cout << "ptr Kendi Adresi (&ptr)    : " << &ptr << "\n";
    std::cout << "ptr Deferans (*ptr)        : " << *ptr << "\n\n";

    // Deferans üzerinden adresteki orijinal değeri doğrudan güncelleme
    *ptr = 250;
    std::cout << "--- *ptr = 250 İşleminden Sonra ---\n";
    std::cout << "sensorVerisi Güncel Değeri : " << sensorVerisi << "\n";
    std::cout << "*ptr Değeri                : " << *ptr << "\n";

    return 0;
}
