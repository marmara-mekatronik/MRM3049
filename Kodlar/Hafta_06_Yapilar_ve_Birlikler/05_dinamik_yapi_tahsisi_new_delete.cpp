/**
 * @file 05_dinamik_yapi_tahsisi_new_delete.cpp
 * @brief Dinamik bellekte (Heap) new ve delete operatörleri ile yapı yönetimi
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <string>

struct IMU_Sensör {
    int sensorId;
    std::string model;
    float ivmeX, ivmeY, ivmeZ;
    float jiroskopZ;
};

int main() {
    // 1. Heap uzerinde dinamik tekil yapi tahsisi
    IMU_Sensör* imu = new IMU_Sensör{301, "MPU-6050", 0.02f, -0.15f, 9.81f, 0.05f};

    std::cout << "--- Dinamik IMU Sensör Verisi ---\n";
    std::cout << "Model     : " << imu->model << " (ID: " << imu->sensorId << ")\n";
    std::cout << "Z-Ivmesi  : " << imu->ivmeZ << " m/s^2 (Yercekimi)\n";
    std::cout << "Z-Donus   : " << imu->jiroskopZ << " rad/s\n";
    std::cout << "Bellek Adresi (Heap): " << imu << "\n\n";

    // 2. Bellek temizligi ve guvenli sifirlama
    delete imu;
    imu = nullptr;

    // 3. Heap uzerinde dinamik yapi dizisi tahsisi
    const int KANAL_SAYISI = 3;
    IMU_Sensör* sensorDizisi = new IMU_Sensör[KANAL_SAYISI];

    for (int i = 0; i < KANAL_SAYISI; ++i) {
        sensorDizisi[i].sensorId = 400 + i;
        sensorDizisi[i].ivmeZ = 9.80f + (i * 0.01f);
    }

    std::cout << "--- Dinamik Yapi Dizisi ---\n";
    for (int i = 0; i < KANAL_SAYISI; ++i) {
        std::cout << "Sensor [" << i << "] ID: " << sensorDizisi[i].sensorId 
                  << " | IvmeZ: " << sensorDizisi[i].ivmeZ << " m/s^2\n";
    }

    // Dizi silinirken delete[] kullanimi zorunludur!
    delete[] sensorDizisi;
    sensorDizisi = nullptr;

    return 0;
}
