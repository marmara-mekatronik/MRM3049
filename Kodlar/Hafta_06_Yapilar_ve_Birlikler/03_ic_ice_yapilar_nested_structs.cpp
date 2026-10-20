/**
 * @file 03_ic_ice_yapilar_nested_structs.cpp
 * @brief İç içe yapılar (Nested Structs) ve modüler robotik kinematik modelleme
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <cmath>

// 3 Boyutlu uzayda koordinat yapisi
struct Nokta3D {
    double x;
    double y;
    double z;
};

// Robot ucbirim (End-Effector) ve eklem verisi yapisi
struct RobotUcBirim {
    int aletId;
    Nokta3D konum;         // Ic ice yapi
    Nokta3D yonelim;       // Euler acilari (Roll, Pitch, Yaw)
    bool tutucuKapaliMi;
};

// Iki nokta arasi oklid mesafesi hesaplayan fonksiyon
double mesafeHesapla(const Nokta3D& p1, const Nokta3D& p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    double dz = p1.z - p2.z;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

int main() {
    // Ic ice yapinin ilklendirilmesi
    RobotUcBirim gripper = {
        501,
        {150.0, 200.5, 320.0}, // Konum (x, y, z) mm
        {0.0, 45.0, 90.0},     // Yonelim (derece)
        true                   // Tutucu durumu
    };

    Nokta3D hedefNokta = {160.0, 210.0, 325.0};

    std::cout << "--- Robot Ucbirim Durumu ---\n";
    std::cout << "Alet ID      : " << gripper.aletId << "\n";
    std::cout << "Mevcut Konum : (" << gripper.konum.x << ", " 
              << gripper.konum.y << ", " << gripper.konum.z << ") mm\n";
    std::cout << "Yonelim      : (R:" << gripper.yonelim.x << ", P:" 
              << gripper.yonelim.y << ", Y:" << gripper.yonelim.z << ") deg\n";
    std::cout << "Tutucu       : " << (gripper.tutucuKapaliMi ? "KAPALI (Parca Tutuldu)" : "ACIK") << "\n\n";

    double mesafe = mesafeHesapla(gripper.konum, hedefNokta);
    std::cout << "Hedefe Kalan Mesafe: " << mesafe << " mm\n";

    return 0;
}
