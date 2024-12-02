#include <iostream>
using namespace std;
class Sekil{
public:
    Sekil(int g=1, int y=1);
    void setYaz(int g, int y);
    void getOku();
private:
protected:
    int genislik, yukseklik;
};
Sekil::Sekil(int g, int y) {
    genislik=g; yukseklik=y;
}
void Sekil::setYaz(int g, int y) {
    genislik=g; yukseklik=y;
}
void Sekil::getOku() {
    cout << "Nesnesinin Genisligi : " << genislik << endl;
    cout << "Nesnesinin Yuksekligi : " << yukseklik << endl;
}
class Diktorgen: public Sekil{
public:
    Diktorgen(int g=1, int y=1);
    int getAlan();
private:
protected:
};
Diktorgen::Diktorgen(int g, int y) {
    genislik=g;yukseklik=y;
}
int Diktorgen::getAlan() {
    return genislik*yukseklik;
}
int main() {
    Diktorgen D1;
    D1.getOku();
    cout << "D1 nesnesinin alani: "<< D1.getAlan()<< endl;
    D1.setYaz(20,50);
    D1.getOku();
    cout << "D1 nesnesinin alani: "<< D1.getAlan()<< endl;
    return 0;
}
