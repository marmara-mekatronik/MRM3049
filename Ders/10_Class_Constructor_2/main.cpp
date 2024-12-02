#include <iostream>
//Class Constructor with param

using namespace std;

class Cizgi{
public:
    void setUzunluk(double CizgiUzunluk);
    double getUzunluk(void);
    Cizgi(double CizgiUzunluk);
    ~Cizgi();
private:
    double uzunluk;
};

Cizgi::Cizgi(double CizgiUzunluk) {
    cout << "Su anda  nesne olusturuluyor" << endl;
    uzunluk = CizgiUzunluk;
    cout << "Cizginin Olusturulurken verilen Uzunluk : " << CizgiUzunluk;
}
Cizgi::~Cizgi() {
    cout << "\n Su anda  nesne kaldiriliyor" << endl;
}

void Cizgi::setUzunluk(double CizgiUzunluk) {
    uzunluk=CizgiUzunluk;
}

double Cizgi::getUzunluk() {
    return uzunluk;
}

int main() {
    Cizgi cizgi_1(10);
    cizgi_1.setUzunluk(55.55);
    cout << "\nCizginin Degeri Degistikden Sonraki Uzunlugu : " << cizgi_1.getUzunluk();
    return 0;
}
