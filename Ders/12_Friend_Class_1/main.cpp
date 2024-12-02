#include <iostream>

using namespace std;

class Sinif_B;

class Sinif_A{
public:
    Sinif_A():a(10){};
   friend class Sinif_B;
private:
    int a;
};

class Sinif_B{
public:
    void getGoster_A(Sinif_A &x);

private:
    int b;
};

void Sinif_B::getGoster_A(Sinif_A &x){
    cout << "Sinif_A::a=" << x.a << endl;
}


int main() {
    Sinif_A Nesne_A;
    Sinif_B Nesne_B;
    Nesne_B.getGoster_A(Nesne_A);

    return 0;
}
