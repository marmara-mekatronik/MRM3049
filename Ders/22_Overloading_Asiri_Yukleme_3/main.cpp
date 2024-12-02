#include <iostream>
using namespace std;
class Kutu{
private:
    double uzunluk,genislik,yukseklik,hacim;
public:
    double getHacim();
    void setOzellikler(double uzn,double gen,double yuk);

    Kutu operator+(Kutu& b){
        Kutu kutu1;
        kutu1.hacim= this->getHacim()+b.getHacim();
        return kutu1;
    }
};

double Kutu::getHacim() {
    return hacim;
}
void Kutu::setOzellikler(double uzn,double gen,double yuk) {
    uzunluk=uzn;
    genislik=gen;
    yukseklik=yuk;
    hacim=uzn*gen*yuk;
}

int main(){
    Kutu k1;
    Kutu k2;
    Kutu k3;
    Kutu k4;
    double hacim{};

    k1.setOzellikler(1.00,1.00,1.00);
    hacim = k1.getHacim();
    cout << "Kutu 1'in hacmi : " << hacim << endl;
    k2.setOzellikler(2.00,2.00,2.00);
    hacim = k2.getHacim();
    cout << "Kutu 2'in hacmi : " << hacim << endl;
    k3 =  k1 + k2;
    hacim = k3.getHacim();
    cout << "Kutu 3'in hacmi : " << hacim << endl;

    k4 = k3+k1+k2;
    hacim = k4.getHacim();
    cout << "Kutu 4'in hacmi : " << hacim << endl;
    return 0;
}
