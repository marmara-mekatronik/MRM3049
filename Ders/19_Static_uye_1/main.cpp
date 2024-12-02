#include <iostream>

using namespace std;
class SinifA {
public:
    SinifA() { cout << " A Kurucu Fonksiyonu Çağrılıyor...." << endl; }
};

class SinifB {
    static SinifA a;
public:
    SinifB() { cout << " B Kurucu Fonksiyonu Çağrılıyor...." << endl; }
    static SinifA getA(){ return a;}
};

SinifA SinifB::a;
int main() {

    SinifA a = SinifB::getA();

    return 0;
}
