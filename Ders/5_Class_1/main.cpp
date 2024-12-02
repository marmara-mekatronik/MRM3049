#include <iostream>

using namespace std;

class Tarih {
private:
    int Gun;
    int Ay;
    int Yil;
public:
    int gun() { return Gun; }
    int ay() { return Ay; }
    int yil() {
        return Yil;
    }
    bool ayarla(int g, int a, int y);
};

bool Tarih::ayarla(int g, int a, int y) {
    if ((g < 0) || (g > 31)) return false;
    if ((a < 0) || (a > 12)) return false;
    if ((y < 0) || (y > 9999)) return false;
    Gun = g;
    Ay = a;
    Yil = y;
    return true;
}

int main() {
    Tarih bayram;
    Tarih tatiller[5];
    Tarih *birgun;

    birgun = &bayram;

    bayram.ayarla(29,10,2020);
    cout << "Gun:" << bayram.gun() << endl;
    cout << "Ay:" << bayram.ay() << endl;
    cout << "Yil:" << bayram.yil() << endl;

    cout << "------------------" << endl;

    birgun->ayarla(23,04,2020);
    cout << "Gun:" << birgun->gun()<< endl;
    cout << "Ay:" << birgun->ay() << endl;
    cout << "Yil:" << birgun->yil() << endl;

    cout << "------------------" << endl;

    tatiller[0].ayarla(29,12,2020);
    cout << "Gun:" << tatiller[0].gun() << endl;
    cout << "Ay:" << tatiller[0].ay() << endl;
    cout << "Yil:" << tatiller[0].yil() << endl;

    return 0;
}
