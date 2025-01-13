#include <iostream>
using namespace std;
class Kutu {
private:
    double genislik, derinlik, yukseklik;
    public:
    static int nesneSayisi;
    Kutu(double g=2.0, double d=2.0, double y=2.0);
    double getHacim();
};
Kutu::Kutu(double g, double d, double y) {
    genislik = g;
    derinlik = d;
    yukseklik = y;
    nesneSayisi++;
}
double Kutu::getHacim() {
    return genislik * derinlik * yukseklik;
}
int Kutu::nesneSayisi = 0;
int main() {
    Kutu Kutu1(3.3,4.4,5.5);
    Kutu Kutu2(6.3,8.4,10.5);

    cout << "Oluşturulan Toplam Nesne Sayısı :" << Kutu::nesneSayisi << endl;
    cout << "Kutu 1 hacmi : " << Kutu1.getHacim() << endl;
    cout << "Kutu 2 hacim : " << Kutu2.getHacim() << endl;

    return 0;
}
