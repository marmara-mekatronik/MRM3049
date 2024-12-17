#include <iostream>
using namespace std;

// Temel sınıf SinifA
class SinifA {
public:
    // Getter ve Setter fonksiyonları
    int getX() const { return x; }
    void setX(int value) { x = value; }

    int getY() const { return y; }
    void setY(int value) { y = value; }

protected:
    int y;  // protected üyeye sınıf dışından erişilebilir

private:
    int z;  // private üye yalnızca sınıf içinden erişilebilir
    void setZ(int value) { z = value; }
};

// SinifB: public kalıtım
class SinifB : public SinifA {
public:
    SinifB() {
        setX(50);  // setX kullanarak x değerini değiştiriyoruz
    }
    // SinifB, SinifA'nın public üyelerine erişebilir
    // SinifA'nın private üyeleri hala erişilemez
};

// SinifC: protected kalıtım
class SinifC : protected SinifA {
public:
    SinifC() {
        setX(50);  // setX kullanarak x değerini değiştiriyoruz
    }
    // SinifC, SinifA'nın public üyelerini protected olarak miras alır
};

// SinifD: private kalıtım
class SinifD : private SinifA {
public:
    SinifD() {
        setX(50);  // setX kullanarak x değerini değiştiriyoruz
    }
    // SinifD, SinifA'nın tüm üyelerini private olarak miras alır
};

int main() {
    SinifA a;
    SinifB b;
    SinifC c;
    SinifD d;

    // SinifB üzerinden x'e erişim
    cout << "SinifB'deki x: " << b.getX() << endl;

    // SinifC'deki x erişilemez, çünkü protected kalıtım var

    // SinifD'deki x erişilemez, çünkü private kalıtım var

    return 0;
}
