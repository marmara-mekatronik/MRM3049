#include <iostream>

int main() {
    int pilSeviyesi = 15; // Yüzde

    // Basit koşullu atama:
    std::string durum = (pilSeviyesi < 20) ? "DÜŞÜK PİL" : "YETERLİ GÜÇ";
    std::cout << "Pil Durumu: " << durum << "\n";

    // İki sayıdan büyüğünü bulma:
    int sensorA = 450, sensorB = 512;
    int maxOkuma = (sensorA > sensorB) ? sensorA : sensorB;
    std::cout << "Maksimum Sensör Değeri: " << maxOkuma << "\n";

    return 0;
}
