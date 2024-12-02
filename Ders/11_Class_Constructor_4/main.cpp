
#include <iostream>

using namespace std;

class Otomobil {
public:
    string marka;
    string model;
    int yil;

    Otomobil(string x, string y, int z);
    Otomobil(){};
    ~Otomobil();

};

Otomobil::Otomobil(string x, string y, int z) {
    marka = x;
    model = y;
    yil = z;
}

Otomobil::~Otomobil() {
    cout << "\nŞu anda nesne kaldırılıyor..." << endl;
}


int main() {
    Otomobil Otomobil1("Mercedes", "C180", 2021);
    cout << Otomobil1.marka << endl;
    cout << Otomobil1.model << endl;
    cout << Otomobil1.yil << endl;

    Otomobil Otomobil2;
    Otomobil2.marka="Tofas";
    Otomobil2.model="Egea";
    Otomobil2.yil=2020;
    cout << Otomobil2.marka << endl;
    cout << Otomobil2.model << endl;
    cout << Otomobil2.yil << endl;

    return 0;
}
