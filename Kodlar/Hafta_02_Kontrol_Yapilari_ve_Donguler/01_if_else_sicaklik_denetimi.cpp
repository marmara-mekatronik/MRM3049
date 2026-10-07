#include <iostream>

int main() {
    double sicaklik = 78.5; // Santigrat derece
    const double KRITIK_ESIK = 75.0;

    std::cout << "[TELEMETRİ] Güncel Sıcaklık: " << sicaklik << " °C\n";

    if (sicaklik > KRITIK_ESIK) {
        std::cout << "[ALARM]: Sıcaklık kritik eşiği aştı! Soğutma fanı devreye alınıyor.\n";
    } else {
        std::cout << "[BİLGİ]: Sistem sıcaklığı normal sınırlar içerisinde.\n";
    }

    return 0;
}
