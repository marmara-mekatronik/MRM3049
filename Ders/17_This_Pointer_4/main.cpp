#include <iostream>
using namespace std;
class Kisi {
private:
    string isim;
    int yas;
public:
    // Zincirleme çağrılar için `this` kullanımı
    Kisi& setIsim(string isim) {
        this->isim = isim;
        return *this;
    }

    Kisi& setYas(int yas) {
        this->yas = yas;
        return *this;
    }

    void yazdir() {
        cout << "İsim: " << isim << ", Yaş: " << yas << endl;
    }
};
int main() {
    Kisi kisi;
    kisi.setIsim("Ayşe").setYas(25).yazdir();

    return 0;
}
