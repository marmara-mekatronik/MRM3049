#include <iostream>
using namespace std;

int main() {
    int sayi = 0, sayiAdedi = 0, toplam = 0;
    int enBuyuk = 0, enKucuk = 0;

    cout << "Pozitif sayılar girin (Durdurmak için 0 girin):" << endl;
    do {
        cout << "Sayı: ";
        cin >> sayi;

        if (sayi > 0) {
            sayiAdedi++;
            toplam += sayi;

            if (sayiAdedi == 1) { // İlk geçerli sayı referans alınır
                enBuyuk = sayi;
                enKucuk = sayi;
            } else {
                if (sayi > enBuyuk) enBuyuk = sayi;
                if (sayi < enKucuk) enKucuk = sayi;
            }
        }
    } while (sayi != 0);

    if (sayiAdedi > 0) {
        double ortalama = static_cast<double>(toplam) / sayiAdedi;
        cout << "Girilen sayı adedi: " << sayiAdedi << endl;
        cout << "En büyük: " << enBuyuk << endl;
        cout << "En küçük: " << enKucuk << endl;
        cout << "Ortalama: " << ortalama << endl;
    } else {
        cout << "Hiç pozitif sayı girilmedi." << endl;
    }

    return 0;
}
