#include <iostream>
#include <cstdlib> // rand() fonksiyonu için
#include <ctime>   // srand() fonksiyonu için
#include "sensor.h"
using namespace std;
int main() {
    // Rastgele sayı üretimi için tohumlama
    srand(time(0));

    // Eşik Değerler
    double sicaklikEsik = 30.0; // 30°C
    double nemEsik = 50.0;       // %50

    // Alarm Durumu
    bool alarm = false;

    // Sensör Verilerini Oku
    double sicaklik = okuSicaklik();
    double nem = okuNem();
    // Verileri Ekrana Yazdır
    cout << "Sıcaklık: " << sicaklik << "°C" << endl;
    cout << "Nem: " << nem << "%" << endl;

    // Alarm Kontrolü
    kontrolEt(sicaklik, nem, alarm, sicaklikEsik, nemEsik);

    if (alarm) {
        cout << "ALARM: Eşik değerler aşıldı!" << endl;
    } else {
        cout << "Sistem normal çalışıyor." << endl;
    }
    return 0;
}
