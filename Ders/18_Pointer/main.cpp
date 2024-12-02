#include <iostream>

using namespace std;

class Kutu {
public:
    Kutu(double g = 2.0, double d = 2.0, double y = 2.0);

    double hacim();

private:
    double genislik;
    double derinlik;
    double yukseklik;
};

Kutu::Kutu(double g, double d, double y) {
    cout << "Yapıcı Fanksiyon Çağrılıyor......" << endl;
    genislik = g;
    derinlik = d;
    yukseklik = y;
}

double Kutu::hacim() {
    return genislik * derinlik * yukseklik;
}

int main() {
    Kutu Kutu1(10.1, 10.2, 10.3);
    cout << "Kutu Nesnensinin Hacmi :" << Kutu1.hacim() << endl;
    Kutu Kutu2(5.2, 5.3, 5.4);
    Kutu *ptrKutu;

    ptrKutu = &Kutu2;
    cout << "Kutu Nesnensinin Hacmi :" << ptrKutu->hacim() << endl;
    return 0;
}
