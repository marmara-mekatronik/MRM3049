#include <iostream>
#include <string>
using namespace std;

// Soyut sınıf (Abstract class)
class Motor {
public:
    virtual void start() = 0;    // Saf sanal fonksiyon
    virtual void stop() = 0;     // Saf sanal fonksiyon
    virtual void setSpeed(int speed) = 0; // Saf sanal fonksiyon

    virtual ~Motor() {}
};

// Türetilmiş sınıf: DC Motor
class DCMotor : public Motor {
public:
    void start() override {
        cout << "DC Motor çalıştırılıyor." << endl;
    }

    void stop() override {
        cout << "DC Motor durduruluyor." << endl;
    }

    void setSpeed(int speed) override {
        cout << "DC Motor hızı " << speed << " RPM olarak ayarlanıyor." << endl;
    }
};

// Türetilmiş sınıf: Step Motor
class StepMotor : public Motor {
public:
    void start() override {
        cout << "Step Motor çalıştırılıyor." << endl;
    }

    void stop() override {
        cout << "Step Motor durduruluyor." << endl;
    }

    void setSpeed(int speed) override {
        cout << "Step Motor hızı " << speed << " adım/saniye olarak ayarlanıyor." << endl;
    }
};

// Türetilmiş sınıf: Servo Motor
class ServoMotor : public Motor {
public:
    void start() override {
        cout << "Servo Motor çalıştırılıyor." << endl;
    }

    void stop() override {
        cout << "Servo Motor durduruluyor." << endl;
    }

    void setSpeed(int speed) override {
        cout << "Servo Motor pozisyonu " << speed << " derece olarak ayarlanıyor." << endl;
    }
};

int main() {
    // Motor nesnelerini soyut sınıf işaretçileri ile kontrol etme
    Motor* motor1 = new DCMotor();
    Motor* motor2 = new StepMotor();
    Motor* motor3 = new ServoMotor();

    // Polimorfizm ile motorları çalıştırma
    motor1->start();
    motor1->setSpeed(1500);
    motor1->stop();

    motor2->start();
    motor2->setSpeed(200);
    motor2->stop();

    motor3->start();
    motor3->setSpeed(90);
    motor3->stop();

    // Bellek temizliği
    delete motor1;
    delete motor2;
    delete motor3;

    return 0;
}
