#include <iostream>
using namespace std;

int main() {
    int gun;
    cout << "Gün numarası girin (1-7): ";
    cin >> gun;

    switch (gun) {
        case 1: cout << "Pazartesi"; break;
        case 2: cout << "Salı"; break;
        case 3: cout << "Çarşamba"; break;
        case 4: cout << "Perşembe"; break;
        case 5: cout << "Cuma"; break;
        case 6: cout << "Cumartesi"; break;
        case 7: cout << "Pazar"; break;
        default:
            cout << "Geçersiz Gün!"; break;
    }
    cout << endl;

    return 0;
}
