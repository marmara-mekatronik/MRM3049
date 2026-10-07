#include <iostream>

int main() {
    int secim = 0;
    int deneme = 0;

    // Gövde EN AZ BİR KEZ kesinlikle çalışır:
    do {
        deneme++;
        std::cout << "Robot Çalışma Modu (1: Manuel, 2: Otonom, 3: Çıkış): ";
        // Simülasyon gereği 2. denemede geçerli mod (2) seçildiğini varsayalım
        if (deneme == 1) {
            secim = 99; // Geçersiz seçim simülasyonu
            std::cout << secim << "\n[HATA]: Geçersiz seçim! Tekrar deneyiniz.\n";
        } else {
            secim = 2;
            std::cout << secim << "\n";
        }
    } while (secim < 1 || secim > 3);

    std::cout << "Mod " << secim << " başarıyla devreye alındı.\n";
    return 0;
}
