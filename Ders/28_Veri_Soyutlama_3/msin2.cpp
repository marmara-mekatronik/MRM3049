#include <iostream>
#include <string>
using namespace std;

// Soyut sınıf (Abstract class)
class Sensor {
public:
    // Saf sanal fonksiyonlar
    virtual void readData() = 0;
    virtual void calibrate() = 0;

    virtual ~Sensor() {}
};

// Türetilmiş sınıf: Sıcaklık Sensörü
class TemperatureSensor : public Sensor {
public:
    void readData() override {
        cout << "Sıcaklık Sensörü: 25°C okundu." << endl;
    }

    void calibrate() override {
        cout << "Sıcaklık Sensörü kalibre edildi." << endl;
    }
};

// Türetilmiş sınıf: Basınç Sensörü
class PressureSensor : public Sensor {
public:
    void readData() override {
        cout << "Basınç Sensörü: 1013 hPa okundu." << endl;
    }

    void calibrate() override {
        cout << "Basınç Sensörü kalibre edildi." << endl;
    }
};

// Türetilmiş sınıf: Ultrasonik Sensör
class UltrasonicSensor : public Sensor {
public:
    void readData() override {
        cout << "Ultrasonik Sensör: Mesafe 120 cm ölçüldü." << endl;
    }

    void calibrate() override {
        cout << "Ultrasonik Sensör kalibre edildi." << endl;
    }
};

int main() {
    // Sensör nesnelerini soyut sınıf işaretçileri ile kontrol etme
    Sensor* sensors[] = {
        new TemperatureSensor(),
        new PressureSensor(),
        new UltrasonicSensor()
    };

    // Sensörlerin verilerini okuma ve kalibrasyon yapma
    for (Sensor* sensor : sensors) {
        sensor->readData();
        sensor->calibrate();
        cout << "----------------------" << endl;
        delete sensor; // Bellek temizliği
    }

    return 0;
}
