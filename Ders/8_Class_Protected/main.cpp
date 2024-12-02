#include <iostream>

using namespace std;

class Kutu{
protected:
    double genislik;
};

class KucukKutu:Kutu{
public:
    void setKucukGenislik(double kGenislik);
    double getKucukGenislik(void);
};

void KucukKutu::setKucukGenislik(double kGenislik) {
    genislik= kGenislik;
}

double KucukKutu::getKucukGenislik() {
    return genislik;
}


int main() {

    Kutu kutucuk; // <------ Erisilir degil.

    KucukKutu kucuk_kutucuk;
    kucuk_kutucuk.setKucukGenislik(44.44);
    cout<< "Kucuk Kutucugun Genisligi :" << kucuk_kutucuk.getKucukGenislik();
    return 0;
}
