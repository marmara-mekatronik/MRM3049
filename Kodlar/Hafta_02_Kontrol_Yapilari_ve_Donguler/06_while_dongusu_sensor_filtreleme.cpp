#include <iostream>

int main() {
    int sensorDegeri = 120;
    int adim = 0;

    std::cout << "Sensör kalibrasyon süreci başlatıldı (Eşik: 50)...\n";

    // Koşul baştan kontrol edilir:
    while (sensorDegeri > 50) {
        adim++;
        sensorDegeri -= 15; // Her adımda gürültü düşürülüyor
        std::cout << "Adım " << adim << ": Sensör Değeri = " << sensorDegeri << "\n";
    }

    std::cout << "Kalibrasyon tamamlandı. Güvenli eşiğe " << adim << " adımda ulaşıldı.\n";
    return 0;
}
