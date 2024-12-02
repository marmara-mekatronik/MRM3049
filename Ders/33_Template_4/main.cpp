#include <iostream>
using namespace std;

template<class T>
class Depo{
private:
    T mali_deger;
public:
    Depo(T deger):mali_deger(deger){}
    ~Depo(){
        cout << "Deger:" << mali_deger << endl;
    }
};


int main() {
// Depo<int> Deger1(5.5);
Depo<double> Deger2(5.5);
    return 0;
}
