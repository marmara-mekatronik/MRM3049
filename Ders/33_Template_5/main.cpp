#include <iostream>
#include <iomanip>

using namespace std;
template<class deger>
class Toplama{
private:
    deger a, b;
public:
    Toplama(deger x, deger y){
        a=x;
        b=y;
    }
    void goster(){
        cout<<a<< " ve "<<b<< " toplami: "<< Topla() << endl;
    }
    deger Topla(){
        return a+b;
    }

};


int main() {
    Toplama<int> T1(8,6);
    Toplama<float> T2(8.2,6.3);
    Toplama<char> T3('A','8');
    T1.goster();
    T2.goster();
    T3.goster();
    return 0;
}
