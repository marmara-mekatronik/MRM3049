#include <iostream>
using namespace std;

class BankaHesabi {
private:
    string hesapSahibi;
    double bakiye;

public:
    // Yapıcı Fonksiyon (Constructor)
    BankaHesabi(string isim, double ilkBakiye) {
        hesapSahibi = isim;
        bakiye = ilkBakiye;
    }

    // Hesap bakiyesini gösteren metot
    void bakiyeGoster() {
        cout << "Hesap Sahibi: " << hesapSahibi << ", Bakiye: " << bakiye << " TL" << endl;
    }

    // Para yatırma metodu
    void paraYatir(double miktar) {
        bakiye += miktar;
        cout << miktar << " TL yatırıldı. Yeni bakiye: " << bakiye << " TL" << endl;
    }

    // Para çekme metodu
    void paraCek(double miktar){
        if (bakiye >= miktar) {
            bakiye -= miktar;
            cout << miktar << " TL çekildi. Yeni bakiye: " << bakiye << " TL" << endl;
        } else {
            cout << "Yetersiz bakiye!" << endl;
        }
    }
};

    int main() {
        // Banka hesabı nesneleri oluşturma
        BankaHesabi hesap1("Ahmet", 1000);
        BankaHesabi hesap2("Ayşe", 1500);

        // Nesnelerin metodlarını kullanma
        hesap1.bakiyeGoster();
        hesap2.bakiyeGoster();

        hesap1.paraYatir(500);
        hesap2.paraCek(200);

        return 0;
    }
