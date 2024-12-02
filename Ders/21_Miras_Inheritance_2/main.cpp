#include <iostream>

using namespace::std;
class Sekil{
public:
    void setGenislik(int g);
    void setYukseklik(int y);

protected:
    int genislik, yukseklik;
};

void Sekil::setGenislik(int g) {
    genislik=g;
}
void Sekil::setYukseklik(int y) {
    yukseklik=y;
}

class Deger{
public:
    int getDeger(int alan){
    return alan * birimDeger;
    }
    int birimDeger;
};

class Dikdorgen: public Sekil, public Deger {
public:
    int getAlan(){
        return (genislik * yukseklik);
    }
};

int main() {
    int alan;
    Dikdorgen Dik1;
    Dik1.setGenislik(5);
    Dik1.setYukseklik(15);
    alan = Dik1.getAlan();
    Dik1.birimDeger=200;
    cout << "Diktorgenin Alani: " << Dik1.getAlan() << endl;
    cout << "Diktorgenin Fiyati: " << Dik1.getDeger(alan) << endl;
    return 0;
}
