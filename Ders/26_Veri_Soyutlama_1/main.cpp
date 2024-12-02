#include <iostream>

using namespace std;

class Zaman{
public:
    Zaman();
    void setZaman(int san, int dak, int Sa );
    void getZaman();

private:
    int saniye;
    int dakika;
    int saat;
};

Zaman::Zaman() {
saniye=0;
dakika=0;
saat=0;
}

void Zaman::setZaman(int san, int dak, int Sa) {
    saniye=san;
    dakika=dak;
    saat=Sa;
}

void Zaman::getZaman() {
    cout << saat << ":";
    cout << dakika << ":";
    cout << saniye ;
}


int main() {
    Zaman zaman1;
    zaman1.setZaman(58,30,12);
    zaman1.getZaman();
    return 0;
}
