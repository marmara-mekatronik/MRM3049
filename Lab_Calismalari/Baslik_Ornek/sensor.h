//
// Created by hyuce on 15.10.2024.
//
#ifndef SENSOR_H
#define SENSOR_H

// Fonksiyon Prototipleri
double okuSicaklik();
double okuNem();
void kontrolEt(double sicaklik, double nem,
    bool &alarm, double sicaklikEsik, double nemEsik);
#endif //SENSOR_H
