#include <iostream>
using namespace std;

// Vektor sınıfı tanımlanıyor
class Vektor {
public:
    int x, y;

    // + operatörü aşırı yükleniyor
    Vektor operator+(const Vektor& other) const {
        Vektor sonuc;
        sonuc.x = x + other.x;
        sonuc.y = y + other.y;
        return sonuc;
    }
};

int main() {
    // İki vektör oluşturuluyor

    Vektor v1 = {2, 3};
    Vektor v2 = {4, 5};

    // + operatörü kullanılarak vektörler toplanıyor
    Vektor toplam = v1 + v2;

    // Sonuç ekrana yazdırılıyor
    cout << "Toplam: (" << toplam.x << ", " << toplam.y << ")" << endl;

    return 0;
}
