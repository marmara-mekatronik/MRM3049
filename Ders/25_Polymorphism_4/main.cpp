#include <iostream>

using namespace std;

class Sensor {
public:
    virtual int veri(int deger) = 0;
    virtual ~Sensor() {} // Sanal yıkıcı eklenmiştir
};

class Sensor1 : public Sensor {
public:
    int veri(int deger) override {
        return deger;
    }
};

class Sensor2 : public Sensor {
public:
    int veri(int deger) override {
        return deger;
    }
};

class Sensor3 : public Sensor {
public:
    int veri(int deger) override {
        return deger;
    }
};

int main() {
    Sensor* ptrSensor[3];
    ptrSensor[0] = new Sensor1();
    ptrSensor[1] = new Sensor2();
    ptrSensor[2] = new Sensor3();

    for (int i = 0; i < 3; ++i) {
        cout << ptrSensor[i]->veri((i + 1) * 20) << endl;
    }

    // Bellek sızıntısını önlemek için delete kullanılmalı
    for (int i = 0; i < 3; ++i) {
        delete ptrSensor[i];
    }

    return 0;
}
