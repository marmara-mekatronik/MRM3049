#include <iostream>

using namespace std;

class Sekil{
protected:
    int genislik, yukseklik;
public:
    Sekil(int a=0, int b=0);
    virtual int alan();
    // int alan();
};
Sekil::Sekil(int a, int b) {
    genislik=a;
    yukseklik=b;
}
int Sekil::alan() {
    cout << "Ebeveyn sınıf alanı : " << endl;
    return 0;
}
class Dikdortgen: public Sekil{
public:
    Dikdortgen(int a=0, int b=0):Sekil(a, b){}
    int alan(){
        cout << "Dikdörtgen alanı : " << endl;
        return (genislik*yukseklik);
    }
};
class Ucgen: public Sekil{
public:
    Ucgen(int a=0, int b=0):Sekil(a, b){}
    int alan(){
        cout << "Uçgen alanı : " << endl;
        return (genislik*yukseklik)/2;
    }
};



int main() {
    Sekil *sekil1, *sekil2;

    Sekil sek;

    Dikdortgen dik(10,20);
    Ucgen ucg(15,25);

//    cout << sek.alan() << endl;
//    cout << dik.alan() << endl;
//    cout << ucg.alan() << endl;

    sekil1 = &dik ;
    cout << sekil1->alan() << endl;
    sekil2 = &ucg ;
    cout << sekil2->alan() << endl;

    return 0;
}
