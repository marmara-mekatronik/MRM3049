#include <iostream>

class Kutu {
public:
    double uzunluk;
    void setGenislik(double gDeger);
    double getGenislik(void);
private:
    double genislik;
};

void Kutu::setGenislik(double gDeger) {
    std::cout << "Set edilen Genislik degeri :"<< gDeger << std::endl;
    genislik = gDeger;
}
double Kutu::getGenislik() {
    return genislik;
}

int main() {
    Kutu kutu_1;
    kutu_1.setGenislik(12.5);
    std::cout << "Okunan Genislik degeri:" << kutu_1.getGenislik();
    return 0;
}
