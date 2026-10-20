/**
 * @file 13_mekatronik_adc_sensor_taramasi.cpp
 * @brief Mekatronik Uygulama: 8 kanallı ADC sensör dizisinin taranması ve eşik sınır denetimi
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>

const int KANAL_SAYISI = 8;
const int TEHLIKE_ESIGI = 800; // 10-bit ADC icin tehlike esigi (0-1023)

// Sensor kanali turu
enum SensorTipi {
    SICAKLIK,
    AKIM,
    BASINC,
    GERILIM
};

int main() {
    // 8 Kanalli ADC Ham Okuma Degerleri (0 - 1023 arasi)
    int adcKanallari[KANAL_SAYISI] = {312, 540, 845, 910, 420, 680, 815, 210};
    SensorTipi sensorTurleri[KANAL_SAYISI] = {
        SICAKLIK, AKIM, SICAKLIK, BASINC,
        GERILIM,  AKIM, BASINC,   GERILIM
    };

    std::cout << "====================================================\n";
    std::cout << "     MEKATRONIK 8-KANALLI ADC TELEMETRI PANELİ      \n";
    std::cout << "====================================================\n";
    std::cout << std::left << std::setw(8) << "Kanal" 
              << std::setw(12) << "Tur" 
              << std::setw(12) << "Ham ADC" 
              << std::setw(12) << "Gerilim(V)" 
              << "Durum\n";
    std::cout << "----------------------------------------------------\n";

    int kritikKanalSayisi = 0;

    for (int ch = 0; ch < KANAL_SAYISI; ++ch) {
        int hamVeri = adcKanallari[ch];
        double gerilim = (static_cast<double>(hamVeri) / 1023.0) * 5.0; // 5V Referans

        std::string turAdi;
        switch (sensorTurleri[ch]) {
            case SICAKLIK: turAdi = "Sicaklik"; break;
            case AKIM:     turAdi = "Akim";     break;
            case BASINC:   turAdi = "Basinc";   break;
            case GERILIM:  turAdi = "Gerilim";  break;
        }

        std::cout << "CH" << ch << "     " 
                  << std::left << std::setw(12) << turAdi 
                  << std::setw(12) << hamVeri 
                  << std::fixed << std::setprecision(2) << std::setw(12) << gerilim;

        if (hamVeri >= TEHLIKE_ESIGI) {
            std::cout << "[ALARM: KRITIK]\n";
            kritikKanalSayisi++;
        } else {
            std::cout << "[NORMAL]\n";
        }
    }

    std::cout << "----------------------------------------------------\n";
    std::cout << "Tarama Tamamlandi. Kritik Durumdaki Kanal Sayisi: " 
              << kritikKanalSayisi << "\n";

    if (kritikKanalSayisi > 0) {
        std::cout << "UYARI: Acil durum sogutma / koruma roleri tetiklendi!\n";
    }

    return 0;
}
