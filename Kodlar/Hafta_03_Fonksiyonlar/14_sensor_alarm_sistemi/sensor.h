#pragma once

struct SensorVerisi {
    double sicaklik;
    double nem;
};

bool veriGecerliMi(const SensorVerisi& v);
bool alarmKontrol(const SensorVerisi& v, double sicaklikEsik, double nemEsik);
void telemetriYazdir(const SensorVerisi& v);
