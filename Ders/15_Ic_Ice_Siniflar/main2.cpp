#include <iostream>
using namespace std;

class DisSinif {
private:
    int veri;

public:
    DisSinif(int deger) : veri(deger) {}

    // İç sınıf
    class IcSinif {
    public:
        void yazdir(const DisSinif& disObj) {
            // Dış sınıfın private verisine erişim
            cout << "Dış sınıf verisi: " << disObj.veri << endl;
        } };
};
int main() {
    DisSinif disObj(42);               // Dış sınıf nesnesi
    DisSinif::IcSinif icObj;           // İç sınıf nesnesi
    icObj.yazdir(disObj);              // İç sınıf üzerinden veri erişimi
    return 0;
}
