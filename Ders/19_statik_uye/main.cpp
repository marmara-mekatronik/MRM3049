#include <iostream>

using namespace std;

class Kutu {
public:
    static int nesneSayisi;

    Kutu(double g = 2.0, double d = 2.0, double y = 2.0);

    double hacim();

private:
    double genislik;
    double derinlik;
    double yukseklik;
};

Kutu::Kutu(double g, double d, double y) {
    cout << "Yapici Fanksiyon Yükleniyor...." << endl;
    genislik = g;
    derinlik = d;
    yukseklik = y;

    nesneSayisi++;
    //^^^^^^^^^^^
}

double Kutu::hacim() {
    return genislik * derinlik * yukseklik;
}

int Kutu::nesneSayisi=0;

int main() {
    Kutu Kutu1(3.3,1.2,2.3);
    Kutu Kutu2(8.1,8.2,8.3);

    cout << "Oluşturulan Toplam Nesne Sayısı :" << Kutu::nesneSayisi << endl;
    cout << "Kutu 1'deki değer : " << Kutu1.nesneSayisi << endl;
    cout << "Kutu 2'deki değer : " << Kutu2.nesneSayisi << endl;
    return 0;
}
