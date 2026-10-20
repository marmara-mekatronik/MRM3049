/**
 * @file 04_yapi_isaretcileri_ve_ok_operatoru.cpp
 * @brief Yapı işaretçileri, ok (->) operatörü ve fonksiyona işaretçi/referans aktarımı
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

struct BataryaTelemetrisi {
    int hucreSayisi;
    double toplamVoltaj;
    double sicaklik;
    int sarjYuzdesi;
};

// 1. Isaretci ile aktarim (Ok -> operatoru kullanimi)
void telemetriYazdirPtr(const BataryaTelemetrisi* bPtr) {
    if (bPtr == nullptr) return;

    std::cout << "[Isaretci ile Erisim]\n";
    std::cout << "Hucre Sayisi : " << bPtr->hucreSayisi << "\n";
    std::cout << "Toplam Voltaj: " << bPtr->toplamVoltaj << " V\n";
    std::cout << "Sarj Yuzdesi : %" << bPtr->sarjYuzdesi << "\n\n";
}

// 2. Referans ile aktarim ve deger guncelleme
void bataryaSarjEt(BataryaTelemetrisi& bRef, int artisMiktari) {
    bRef.sarjYuzdesi += artisMiktari;
    if (bRef.sarjYuzdesi > 100) {
        bRef.sarjYuzdesi = 100;
    }
    bRef.toplamVoltaj = (bRef.hucreSayisi * 4.2) * (bRef.sarjYuzdesi / 100.0);
}

int main() {
    BataryaTelemetrisi bms = {6, 22.2, 31.5, 45};

    // Yapi isaretcisi tanimlama
    BataryaTelemetrisi* ptr = &bms;

    // Isaretci uzerinden dogrudan telemetri fonksiyonuna gecis
    telemetriYazdirPtr(ptr);

    // Referans ile sarj etme
    std::cout << "--- 30 Dk Hizli Sarj Uygulaniyor... ---\n";
    bataryaSarjEt(bms, 40);

    // Guncellenmis degeri okuma
    telemetriYazdirPtr(&bms);

    return 0;
}
