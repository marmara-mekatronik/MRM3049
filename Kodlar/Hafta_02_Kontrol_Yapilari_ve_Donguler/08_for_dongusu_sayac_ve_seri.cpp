#include <iostream>

int main() {
    int n = 10;
    int toplam = 0;

    std::cout << "1'den " << n << "'e kadar olan tamsayıların toplamı:\n";

    for (int i = 1; i <= n; i++) {
        toplam += i;
        std::cout << "i = " << i << " -> Kümülatif Toplam: " << toplam << "\n";
    }

    std::cout << "Sonuç: " << toplam << "\n";
    return 0;
}
