#include <iostream>

using namespace std;
class ogrenci{
private:
    int Puan;
    string ad, soyad;
public:
    ogrenci(string ismi, string soyismi, int Notu){
        ad=ismi;
        soyad=soyismi;
        Puan=Notu;
    }
    void getVeri(){
        cout << "Adi :" << ad << endl;
        cout << "Soyadi :" << soyad << endl;
        cout << "Notu :" << Puan << endl;
    }
    void operator ++(){
        Puan=Puan+5;
    }

};

int main() {
    ogrenci ogr1("Ahmet","Soylu",90);
    ogr1.getVeri();
    ++ogr1;
    ogr1.getVeri();

    return 0;
}
