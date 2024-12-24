#include <iostream>
using namespace std;

class Vektor3D {
private:
    double x, y, z;

public:
    // Yapıcı Fonksiyon
    Vektor3D(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

    // + Operatörünün Aşırı Yüklenmesi (İki vektörün toplamını yapar)
    Vektor3D operator+(const Vektor3D& other) const {
        return Vektor3D(x + other.x, y + other.y, z + other.z);
    }

    // - Operatörünün Aşırı Yüklenmesi (İki vektörün farkını alır)
    Vektor3D operator-(const Vektor3D& other) const {
        return Vektor3D(x - other.x, y - other.y, z - other.z);
    }

    // Ekrana Yazdırma (Arkadaş Fonksiyon)
    friend ostream& operator<<(ostream& os, const Vektor3D& vektor) {
        os << "(" << vektor.x << ", " << vektor.y << ", " << vektor.z << ")";
        return os;
    }
};

int main() {
    // Robot kolunun başlangıç ve hedef pozisyonları
    Vektor3D baslangic(10.5, 20.0, 15.3);
    Vektor3D hedef(5.5, 10.0, 5.3);

    // Operatör Aşırı Yükleme Kullanımı
    Vektor3D hareket = hedef - baslangic; // Hedefe ulaşmak için gereken hareket
    Vektor3D yeniPozisyon = baslangic + hareket; // Yeni pozisyon

    cout << "Başlangıç Pozisyonu: " << baslangic << endl;
    cout << "Hedef Pozisyonu: " << hedef << endl;
    cout << "Hareket Vektörü: " << hareket << endl;
    cout << "Yeni Pozisyon: " << yeniPozisyon << endl;

    return 0;
}
