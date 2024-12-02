#include <iostream>
//Class Constructor

using namespace std;

class Cizgi{
public:
    void setUzunluk(double CizgiUzunluk);
    double getUzunluk(void);
    Cizgi();
    ~Cizgi();
private:
    double uzunluk;
};

Cizgi::Cizgi() {
    cout << "Su anda  nesne olusturuluyor" << endl;
    uzunluk = 10;
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
    Cizgi cizgi_1;
    cout << "Cizginin Olusturulurken Uzunlugu : " << cizgi_1.getUzunluk();
    cizgi_1.setUzunluk(55.55);
    cout << "\nCizginin Degeri Degistikden Sonraki Uzunlugu : " << cizgi_1.getUzunluk();
    return 0;
}
