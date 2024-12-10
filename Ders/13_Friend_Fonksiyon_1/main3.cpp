#include <iostream>
using namespace std;

class Kisi {
private:
    string isim;
    int yas;

public:
    Kisi(string isim, int yas) : isim(isim), yas(yas) {}

    // Friend sınıf bildirimi
    friend class Doktor;
};

class Doktor {
public:
    void bilgileriGoster(const Kisi& kisi) {
        // Kisi sınıfının private üyelerine erişim
        cout << "İsim: " << kisi.isim << ", Yaş: " << kisi.yas << endl;
    }
};

int main() {
    Kisi kisi("Ahmet", 30);
    Doktor doktor;
    doktor.bilgileriGoster(kisi);

    return 0;
}
