#include <iostream>
#include "sensor.h"

int main() {
    std::cout << "=== Moduler Sensor Alarm Modulu ===\n";

    SensorVerisi paket1 = {34.5, 62.0};
    SensorVerisi paket2 = {95.0, 20.0}; // Hatalı sıcaklık

    if (veriGecerliMi(paket1)) {
        telemetriYazdir(paket1);
        if (alarmKontrol(paket1, 30.0, 50.0)) {
            std::cout << "[ALARM] Paket 1 kritik esik degerleri asti!\n";
        }
    }

    if (!veriGecerliMi(paket2)) {
        std::cout << "[HATA] Paket 2 limit disinda (Gecersiz Veri)!\n";
    }

    return 0;
}
