/**
 * @file 05_isaretciye_isaretci_pointer_to_pointer.cpp
 * @brief Göstericiye gösterici (int**) mekanizması ve iki kademeli adresleme
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    int hedefHiz = 1500;   // RPM
    int* ptr = &hedefHiz;  // hedefHiz'in adresini tutan işaretçi
    int** ptrPtr = &ptr;   // ptr'nin adresini tutan işaretçiye işaretçi

    std::cout << "--- İki Kademeli Adresleme Analizi ---\n";
    std::cout << "hedefHiz Değeri      : " << hedefHiz << "\n";
    std::cout << "hedefHiz Adresi (&)  : " << &hedefHiz << "\n";
    std::cout << "ptr Değeri (Adres)   : " << ptr << "\n";
    std::cout << "ptr Kendi Adresi (&) : " << &ptr << "\n";
    std::cout << "ptrPtr Değeri (Adres): " << ptrPtr << "\n";
    std::cout << "*ptrPtr (ptr Değeri) : " << *ptrPtr << "\n";
    std::cout << "**ptrPtr (Asıl Veri) : " << **ptrPtr << "\n\n";

    // İki kademeli deferans ile asıl değeri uzaktan güncelleme
    **ptrPtr = 2200;
    std::cout << "--- **ptrPtr = 2200 İşlemi Sonrası ---\n";
    std::cout << "Güncel hedefHiz Değeri: " << hedefHiz << " RPM\n";

    return 0;
}
