#include <iostream>
#include <vector>

using namespace std;

template <typename T>
vector<T> veriyiFiltrele(const vector<T>& veri, T esikDegeri) {
    vector<T> filtrelenmisVeri;
    for (const T& deger : veri) {
        if (abs(deger) > esikDegeri) { // Mutlak değer karşılaştırması
            filtrelenmisVeri.push_back(deger);
        }
    }
    return filtrelenmisVeri;
}

int main() {
    vector<double> sicaklikVerisi = {25.3, 26.1, -100.0, 24.8, 25.7};
    vector<int> ivmeVerisi = {10, -20, 5, 30, -50};

    vector<double> filtrelenmisSicaklik = veriyiFiltrele(sicaklikVerisi, 50.0);
    vector<int> filtrelenmisIvme = veriyiFiltrele(ivmeVerisi, 25);

        cout << "Filtrelenmis Sicaklik Verisi: ";
        for(double deger: filtrelenmisSicaklik)
            cout << deger << " ";
        cout << "\n";

        cout << "Filtrelenmis Ivme Verisi: ";
        for(int deger: filtrelenmisIvme)
            cout << deger << " ";
        cout << "\n";

    return 0;
}
