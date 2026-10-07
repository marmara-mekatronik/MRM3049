#include <iostream>

int main() {
    int sayi = 4825;
    int gecici = sayi;
    int toplam = 0;

    while (gecici > 0) {
        int sonBasamak = gecici % 10;
        toplam += sonBasamak;
        gecici /= 10;
    }

    std::cout << "Sayı: " << sayi << "\n";
    std::cout << "Basamak Değerleri Toplamı: " << toplam << "\n";
    return 0;
}
