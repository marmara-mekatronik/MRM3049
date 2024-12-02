#include <iostream>
using namespace std;
class Dikdortgen;
class Kare{
public:
    Kare(int kenar):kenarUzunlugu(kenar){}
    void setKenar(int kenar);
    int getKenar();
    friend class Dikdortgen;
private:
    int kenarUzunlugu;
};
void Kare::setKenar(int kenar) {
    kenarUzunlugu=kenar;
}
int Kare::getKenar(){
    return kenarUzunlugu;
}
class Dikdortgen{
public:
    int Alan(Kare &K){
        return K.kenarUzunlugu * K.kenarUzunlugu ;
    }
};
int main() {
    Kare K1(15);
    Dikdortgen D1;
    cout << &K1 << endl;
    cout << "ilk deger:" <<  K1.getKenar() << endl;
    K1.setKenar(50);
    cout << "son deger:" <<  K1.getKenar() << endl;
    cout << "Karenin Alani:" << D1.Alan(K1) << endl;
    return 0;
}
