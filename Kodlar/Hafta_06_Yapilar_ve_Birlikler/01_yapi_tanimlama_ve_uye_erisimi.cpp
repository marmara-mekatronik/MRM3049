/**
 * @file 01_yapi_tanimlama_ve_uye_erisimi.cpp
 * @brief Yapı (struct) bildirimi, üye değişkenler, nesne oluşturma ve doğrudan erişim (.)
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>
#include <string>

// Mekatronik sensor verisi yapisi
struct SensorVerisi {
    int sensorId;
    std::string sensorAdi;
    double gerilim;   // Volt cinsinden
    double sicaklik;  // Santigrat derece
};

int main() {
    // 1. Nesne olusturma ve nokta (.) operatoru ile tek tek deger atama
    SensorVerisi s1;
    s1.sensorId = 101;
    s1.sensorAdi = "Sicaklik_LM35";
    s1.gerilim = 2.45;
    s1.sicaklik = 42.8;

    // 2. Suslu parantez ile ilk deger atama (Aggregate initialization)
    SensorVerisi s2 = {102, "Basinc_MPX5700", 4.12, 65.4};

    std::cout << "--- Sensor 1 Bilgileri ---\n";
    std::cout << "ID       : " << s1.sensorId << "\n";
    std::cout << "Model    : " << s1.sensorAdi << "\n";
    std::cout << "Gerilim  : " << std::fixed << std::setprecision(2) << s1.gerilim << " V\n";
    std::cout << "Sicaklik : " << s1.sicaklik << " C\n\n";

    std::cout << "--- Sensor 2 Bilgileri ---\n";
    std::cout << "ID       : " << s2.sensorId << "\n";
    std::cout << "Model    : " << s2.sensorAdi << "\n";
    std::cout << "Gerilim  : " << s2.gerilim << " V\n";
    std::cout << "Sicaklik : " << s2.sicaklik << " C\n";

    return 0;
}
