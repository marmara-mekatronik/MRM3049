/**
 * @file 18_alistirma_1_imu_sensor_kalibrasyonu.cpp
 * @brief Laboratuvar Alıştırması 1: IMU 6-Eksen Sensör Paketi ve Kalibrasyon
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

struct Vektor3B {
    double x, y, z;
    Vektor3B(double _x = 0.0, double _y = 0.0, double _z = 0.0)
        : x(_x), y(_y), z(_z) {}
};

struct ImuPaketi {
    unsigned int paketNo;
    Vektor3B ivme;     // m/s^2
    Vektor3B jiroskop; // deg/s
};

void jiroskopKalibreEt(ImuPaketi& p, const Vektor3B& ofset) {
    p.jiroskop.x -= ofset.x;
    p.jiroskop.y -= ofset.y;
    p.jiroskop.z -= ofset.z;
}

void imuRaporla(const ImuPaketi& p) {
    std::cout << "[IMU Paket #" << p.paketNo << "]\n";
    std::cout << "  Ivme (m/s^2)    : X=" << p.ivme.x
              << " Y=" << p.ivme.y << " Z=" << p.ivme.z << "\n";
    std::cout << "  Jiroskop (deg/s): X=" << p.jiroskop.x
              << " Y=" << p.jiroskop.y << " Z=" << p.jiroskop.z << "\n";
}

int main() {
    ImuPaketi imu = {1, {0.02, -0.01, 9.81}, {1.25, -0.80, 0.45}};
    Vektor3B  sapmaOfseti(1.20, -0.80, 0.40);

    std::cout << "--- Kalibrasyon Oncesi ---\n";
    imuRaporla(imu);

    jiroskopKalibreEt(imu, sapmaOfseti);

    std::cout << "\n--- Kalibrasyon Sonrasi ---\n";
    imuRaporla(imu);

    return 0;
}

