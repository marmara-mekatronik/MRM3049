//
// Created by hyuce on 15.10.2024.
//
#include <iostream>
#include "sensor.h"

using namespace std;

// Sıcaklık sensöründen veri okuma fonksiyonu (Simülasyon)
double okuSicaklik() {
    // Gerçek uygulamada burada sensör verisi okunur
    // Bu örnekte rastgele bir sıcaklık değeri döndürülmektedir
    return 25.0 + rand() % 10; // 25.0 ile 34.0 arasında bir değer
}
double okuNem() {
    // Gerçek uygulamada burada sensör verisi okunur
    // Bu örnekte rastgele bir nem değeri döndürülmektedir
    return 40.0 + rand() % 20; // 40.0 ile 59.0 arasında bir değer
}

// Alarm kontrol fonksiyonu
void kontrolEt(double sicaklik, double nem, bool &alarm, double sicaklikEsik, double nemEsik) {
    if (sicaklik > sicaklikEsik || nem > nemEsik) {
        alarm = true;
    }
}
