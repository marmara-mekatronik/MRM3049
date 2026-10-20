/**
 * @file 11_etiketli_birlik_tagged_union.cpp
 * @brief Etiketli Birlik (Tagged / Discriminated Union) tasarımı ile güvenli polimorfik veri tutma
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <string>

// Aktif uyeyi belirten tip etiketi
enum class VeriTipi {
    SICAKLIK, // float
    RPM,      // int
    MESAJ     // const char*
};

// Guvenli etiketli birlik yapisi
struct GuvenliTelemetri {
    VeriTipi tip; // Tip etiketi
    union {
        float sicaklikDegeri;
        int motorRpm;
        const char* durumMesaji;
    } payload;    // Isimsiz birlik

    void paketiYazdir() const {
        switch (tip) {
            case VeriTipi::SICAKLIK:
                std::cout << "[SICAKLIK PAKETI] Deger: " << payload.sicaklikDegeri << " C\n";
                break;
            case VeriTipi::RPM:
                std::cout << "[MOTOR HIZ PAKETI] Hiz: " << payload.motorRpm << " RPM\n";
                break;
            case VeriTipi::MESAJ:
                std::cout << "[METIN BILDIRIMI] Mesaj: " << payload.durumMesaji << "\n";
                break;
        }
    }
};

int main() {
    GuvenliTelemetri p1;
    p1.tip = VeriTipi::SICAKLIK;
    p1.payload.sicaklikDegeri = 72.4f;

    GuvenliTelemetri p2;
    p2.tip = VeriTipi::RPM;
    p2.payload.motorRpm = 2850;

    GuvenliTelemetri p3;
    p3.tip = VeriTipi::MESAJ;
    p3.payload.durumMesaji = "BATARYA_DOLDU_OTONOM_BASLADI";

    std::cout << "--- Etiketli Birlik ile Tip Guvenligi ---\n";
    p1.paketiYazdir();
    p2.paketiYazdir();
    p3.paketiYazdir();

    return 0;
}
