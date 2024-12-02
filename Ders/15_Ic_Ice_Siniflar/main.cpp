#include <iostream>

using namespace std;

class Disarisi {
private:
    int x;
public:
    Disarisi();
    int getVeri_D();

    class Icerisi {
    private:
        int y;
    public:
        Icerisi();
        int getVeri_I();
    };
};

Disarisi::Disarisi() {
    x = 5;
}

Disarisi::Icerisi::Icerisi() {
    y = 10;
}

int Disarisi::getVeri_D() {
    return x;
}
int Disarisi::Icerisi::getVeri_I() {
    return y;
}


int main() {
    Disarisi distaraf;
    Disarisi::Icerisi ictaraf;

    cout << "Disarisi :" << distaraf.getVeri_D() << endl;
    cout << "Icerisi :" << ictaraf.getVeri_I()<<endl;


    return 0;
}
