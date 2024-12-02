#include <iostream>

using namespace std;

class Otomobil{     //sınıf
public:             // Erişim Belirleyici
    string marka;   //Özellik
    string model;   //özellik
    int yil;        //özellik
    Otomobil(string x, string y, int z);     //yapıcı deklarasyonu
    ~Otomobil();  // yokedici
};

Otomobil::Otomobil(string x, string y, int z) {
    marka = x;
    model =  y ;
    yil = z ;
}
Otomobil::~Otomobil() {

}

int main() {
    Otomobil araba1("BMW", "X6", 2021);
    Otomobil araba2("Mercedes", "E320", 2023);

    cout << araba1.marka << " " << araba1.model << " " << araba1.yil << endl;
    cout << araba2.marka << " " << araba2.model << " " << araba2.yil << endl;
    return 0;
}
