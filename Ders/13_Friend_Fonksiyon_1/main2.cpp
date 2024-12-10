#include <iostream>
using namespace std;

class Kutu {
private:
    double uzunluk;
public:
    Kutu() : uzunluk(0) {}

    // Friend fonksiyon bildirimi
    friend void uzunlukAyarla(Kutu& k, double l);
};
// Friend fonksiyon tanımı
void uzunlukAyarla(Kutu& k, double l) {
    k.uzunluk = l; // Private üyeye erişim
    cout << "Uzunluk: " << k.uzunluk << endl;
}

int main() {
    Kutu kutu1;
    uzunlukAyarla(kutu1, 10.5);

    return 0;
}
