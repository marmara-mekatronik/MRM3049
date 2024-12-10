#include <iostream>
using namespace std;
class Araba {
private:
    string marka;
public:
    Araba(string m) : marka(m) {}
    // İç sınıf
    class Motor {
    public:
        void calistir() {
            cout << "Motor çalışıyor." << endl;
        }
        void arabaMarkasi(const Araba& araba) {
            // Dış sınıfın private üyesine erişim
            cout << "Arabanın markası: " << araba.marka << endl;
        }
    };
};
int main() {
    Araba araba("Toyota");            // Dış sınıf nesnesi
    Araba::Motor motor;               // İç sınıf nesnesi
    motor.calistir();                 // Motor çalıştırma
    motor.arabaMarkasi(araba);        // Araba markasına erişim
    return 0;
}
