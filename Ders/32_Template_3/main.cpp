#include <iostream>
#include "Dizi.h"

using namespace std;
int main() {
    Dizi<int> intDizi(12);
    Dizi<double> doubleDizi(12);

    for (int sayac = 0; sayac < intDizi.getUzunluk(); ++sayac) {
        intDizi[sayac] = sayac;
        doubleDizi[sayac] = sayac + 0.5;
    }

    for (int sayac = intDizi.getUzunluk()-1; sayac >=0 ; --sayac) {
        cout << intDizi[sayac] << "\t" << doubleDizi[sayac] << endl;
    }

    return 0;
}
