/**
 * @file 02_yapi_dizileri_ve_donguler.cpp
 * @brief Yapı dizileri (Array of Structs), döngülerle toplu veri işleme ve telemetri taraması
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>

struct MotorDurumu {
    int motorId;
    int hedefHiz;     // RPM
    int gercekHiz;    // RPM
    double akimCekisi; // Amper
};

int main() {
    const int MOTOR_SAYISI = 4;

    // 4 Eksenli Robot Kolu Motor Dizi Tanimlamasi
    MotorDurumu robotMotorlari[MOTOR_SAYISI] = {
        {1, 1500, 1492, 1.85},
        {2, 2000, 1980, 2.40},
        {3, 1000,  995, 1.20},
        {4, 2500, 2465, 3.10}
    };

    std::cout << "========================================================\n";
    std::cout << "        ROBOT EKSEN MOTORLARI TELEMETRI TABLOSU         \n";
    std::cout << "========================================================\n";
    std::cout << std::left << std::setw(8) << "Eksen" 
              << std::setw(12) << "Hedef(RPM)" 
              << std::setw(14) << "Gercek(RPM)" 
              << std::setw(12) << "Akim(A)" 
              << "Hata(RPM)\n";
    std::cout << "--------------------------------------------------------\n";

    double toplamAkim = 0.0;

    for (int i = 0; i < MOTOR_SAYISI; ++i) {
        int hizHatasi = robotMotorlari[i].hedefHiz - robotMotorlari[i].gercekHiz;
        toplamAkim += robotMotorlari[i].akimCekisi;

        std::cout << "M" << robotMotorlari[i].motorId << "      " 
                  << std::left << std::setw(12) << robotMotorlari[i].hedefHiz 
                  << std::setw(14) << robotMotorlari[i].gercekHiz 
                  << std::fixed << std::setprecision(2) << std::setw(12) << robotMotorlari[i].akimCekisi 
                  << hizHatasi << "\n";
    }

    std::cout << "--------------------------------------------------------\n";
    std::cout << "Sistem Toplam Cekilen Akim: " << toplamAkim << " A\n";

    return 0;
}
