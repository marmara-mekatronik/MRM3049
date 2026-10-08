#include <iostream>
#include "sensor.h"

bool veriGecerliMi(const SensorVerisi& v) {
    if (v.sicaklik < -40.0 || v.sicaklik > 85.0) return false;
    if (v.nem < 0.0 || v.nem > 100.0) return false;
    return true;
}

bool alarmKontrol(const SensorVerisi& v, double sicaklikEsik, double nemEsik) {
    return (v.sicaklik > sicaklikEsik || v.nem > nemEsik);
}

void telemetriYazdir(const SensorVerisi& v) {
    std::cout << "[TELEMETRI] Sicaklik: " << v.sicaklik 
              << " C | Nem: %" << v.nem << "\n";
}
