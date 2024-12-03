#include <iostream>
using namespace std;
class Sinif_B;
class Sinif_A {
private:
    int a;
public:
    Sinif_A():a(10){};
    friend class Sinif_B;
};
class Sinif_B {
private:
    int b;
public:
    void getDeger(Sinif_A &sinif_a);

};
void Sinif_B::getDeger(Sinif_A &sinif_a) {
    cout<<"Sinif_A::a= "<<sinif_a.a<<endl;
}

int main() {
    Sinif_A Nesne_A;
    Sinif_B Nesne_B;
    Nesne_B.getDeger(Nesne_A);


    return 0;
}
