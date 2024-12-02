#include <iostream>

using namespace std;

class veriYaz {
public:
    void yaz(int i) {
        cout << "Yazılan Tam Sayı : " << i << endl;
    }

    void yaz(double f) {
        cout << "Yazılan kesirli Sayı : " << f << endl;
    }

    void yaz(char *c) {
        cout << "Yazılan Karakter : " << c << endl;
    }
};

int main() {
    veriYaz yaz1;
    yaz1.yaz(55);
    yaz1.yaz(55.66);
    yaz1.yaz("Merhaba Dünya");
    return 0;
}
