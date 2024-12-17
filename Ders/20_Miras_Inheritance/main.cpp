#include <iostream>
using namespace std;

class Sekil {
protected:
    int genislik, yukseklik;
public:
    Sekil(int gen, int yuk):genislik(gen),yukseklik(yuk) {}
    void setYaz(int gen, int yuk){
        genislik=gen;
        yukseklik=yuk;
    }
    void getOku() {
        cout << "Nesnenin Genisligi : " << genislik << endl;
        cout << "Nesnenin Yuksekligi : " << yukseklik << endl;
    }
};
class Dikdortgen : public Sekil {
public:
    Dikdortgen(int gen, int yuk) : Sekil(gen, yuk) {}
    int getAlan() {
        return genislik * yukseklik;
    }
};
int main()
{
    Dikdortgen *D1=new Dikdortgen(3,4);
    D1->getOku();
    cout << "Diktortgenin Alani: " << D1->getAlan() << endl;
    D1->setYaz(10,20);
    D1->getOku();
    cout << "Diktortgenin Alani: " << D1->getAlan() << endl;
    delete D1;
    return 0;
}
