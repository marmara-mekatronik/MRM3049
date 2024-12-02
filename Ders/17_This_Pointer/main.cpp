#include <iostream>
using namespace std;

class Kutu{
public:
    Kutu(double g=2.0, double d=2.0, double y=2.0);
    double hacim();
    int karsilastir(Kutu kutu);
private:
    double genislik, derinlik, yukseklik;
};
Kutu::Kutu(double g, double d, double y) {
    cout<< "Kurucu fonksiyon yukleniyor..." << endl;
    this->genislik=g; derinlik=d; yukseklik=y;
}
double Kutu::hacim() {
    return genislik*derinlik*yukseklik;
}
int Kutu::karsilastir(Kutu kutu) {
    return this->hacim() > kutu.hacim();
}
int main() {
    Kutu birinciKutu;
    Kutu ikinciKutu(0.3,0.4,0.5);
    cout << "1. Kutu Hacimi :" << birinciKutu.hacim() << endl;
    cout << "2. Kutu Hacimi :" << ikinciKutu.hacim() << endl;
    if(birinciKutu.karsilastir(ikinciKutu)){
        cout<< "Kutu 2 kutu 1'den daha kucuktur" <<endl;
    }else{
        cout<< "Kutu 1 kutu 2'den daha kucuktur" <<endl;
    }
    return 0;
}
