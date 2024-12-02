#include <iostream>

using namespace std;

class Kare {
    friend class Dikdortgen;

public:
    Kare(int a);

private:
    int kenar;
};

class Dikdortgen {
    int genislik, yukseklik;
public:
    void setKenarlar(int gen, int yuk);

    int alan();

    void cevir(Kare &a);
};

void Dikdortgen::setKenarlar(int gen, int yuk) {
    genislik = gen;
    yukseklik = yuk;
}

int Dikdortgen::alan() {
    return genislik * yukseklik;
}

void Dikdortgen::cevir(Kare &a) {
    genislik = a.kenar;
    yukseklik = a.kenar;
}

Kare::Kare(int a) {
    kenar = a;
}



int main() {
    Dikdortgen diktorgen1;
    diktorgen1.setKenarlar(15,20);
    cout << diktorgen1.alan() << endl;

    Kare kare1(50);
    diktorgen1.cevir(kare1);
    cout << diktorgen1.alan() << endl;

    return 0;
}
