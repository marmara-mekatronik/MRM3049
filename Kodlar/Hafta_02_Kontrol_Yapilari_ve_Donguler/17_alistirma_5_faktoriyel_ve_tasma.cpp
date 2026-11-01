#include <iostream>
using namespace std;

int main() {
    int sayi;
    cout << "Pozitif bir tamsayı girin (0 - 20): ";
    cin >> sayi;

    if (sayi < 0) {
        cout << "[HATA] Negatif sayıların faktöriyeli tanımlı değildir!" << endl;
    } else if (sayi > 20) {
        cout << "[UYARI] 20'den büyük sayılar 64-bit tamsayı sınırını (long long) aşar!"
             << endl;
    } else {
        long long faktoriyel = 1;
        for (int i = 1; i <= sayi; i++) {
            faktoriyel *= i;
        }
        cout << sayi << "! = " << faktoriyel << endl;
    }

    return 0;
}
