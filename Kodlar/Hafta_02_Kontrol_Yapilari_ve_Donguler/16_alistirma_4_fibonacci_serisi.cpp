#include <iostream>
using namespace std;

int main() {
    int terimSayisi;
    cout << "Üretilecek Fibonacci terim sayısını girin (N >= 2): ";
    cin >> terimSayisi;

    if (terimSayisi < 1) {
        cout << "En az 1 terim istenmelidir!" << endl;
        return 1;
    }

    long long a = 0; // F(0)
    long long b = 1; // F(1)

    cout << "Fibonacci Serisi: ";
    if (terimSayisi == 1) {
        cout << a << endl;
        return 0;
    }

    cout << a << " " << b << " ";
    for (int i = 3; i <= terimSayisi; i++) {
        long long c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;

    return 0;
}
