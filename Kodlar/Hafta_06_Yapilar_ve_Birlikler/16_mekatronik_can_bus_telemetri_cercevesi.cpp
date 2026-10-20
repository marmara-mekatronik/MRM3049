/**
 * @file 16_mekatronik_can_bus_telemetri_cercevesi.cpp
 * @brief Mekatronik Uygulama: CAN Bus telemetri protokolü, bit alanları, enum class ve birlik ile paketleme/çözümleme
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <iomanip>
#include <cstdint>

// 1. Surus calisma modu (1 byte)
enum class SurucuModu : uint8_t {
    MANUEL      = 0x01,
    OTONOM      = 0x02,
    ACIL_STOP   = 0xFF
};

// 2. Dolgusuz 8-baytlik CAN Bus Telemetri Veri Cercevesi
#pragma pack(push, 1)
struct CanTelemetri {
    int16_t motorHizi;        // 2 byte: RPM (-32768 ile +32767)
    uint8_t govdeSicakligi;   // 1 byte: 0 - 255 C

    // 1 Bayt icinde bit duzeyinde paketlenmis bayraklar
    struct {
        uint8_t frenAktif   : 1; // Bit 0
        uint8_t asiriAkim   : 1; // Bit 1
        uint8_t engelAlgilandi : 1; // Bit 2
        uint8_t rezerve     : 5; // Bit 3..7
    } bayraklar;

    SurucuModu calismaModu;   // 1 byte
    uint8_t bataryaSeviyesi;  // 1 byte: %0 - %100
    uint16_t donusAcisi;      // 2 byte: 0.1 derece biriminde direksiyon acisi
}; // Toplam: 2 + 1 + 1 + 1 + 1 + 2 = Tam 8 bayt! (Standart CAN Frame Payload)
#pragma pack(pop)

// 3. Ham CAN bayt dizisi ile telemetri yapisini birlestiren Birlik
union CanCerceveTamponu {
    CanTelemetri veri;
    uint8_t hamBaytlar[sizeof(CanTelemetri)];
};

int main() {
    std::cout << "========================================================\n";
    std::cout << "      CAN BUS TELEMETRI PAKETLEME VE COZUMLEME          \n";
    std::cout << "========================================================\n";
    std::cout << "CAN Veri Yuku Boyutu: " << sizeof(CanTelemetri) << " bayt\n\n";

    // 1. Verici (TX): Robot Kontrol Unitesi Telemetri Uretiyor
    CanCerceveTamponu txTampon;
    txTampon.veri.motorHizi = 2450;
    txTampon.veri.govdeSicakligi = 58;
    txTampon.veri.bayraklar.frenAktif = 0;
    txTampon.veri.bayraklar.asiriAkim = 0;
    txTampon.veri.bayraklar.engelAlgilandi = 1;
    txTampon.veri.calismaModu = SurucuModu::OTONOM;
    txTampon.veri.bataryaSeviyesi = 87;
    txTampon.veri.donusAcisi = 450; // 45.0 derece

    std::cout << "--- CAN Veri Yoluna Basilan 8 Ham Bayt ---\n";
    for (size_t i = 0; i < sizeof(CanTelemetri); ++i) {
        std::cout << "Byte " << i << ": 0x" 
                  << std::hex << std::uppercase << std::setw(2) << std::setfill('0') 
                  << static_cast<int>(txTampon.hamBaytlar[i]) << " ";
    }
    std::cout << std::dec << "\n\n";

    // 2. Alici (RX): Uzak Telemetri Izleme Unitesi Paketi Cozumler
    CanCerceveTamponu rxTampon;
    // Ham verilerin kablodan alindigi varsayilir:
    for (size_t i = 0; i < sizeof(CanTelemetri); ++i) {
        rxTampon.hamBaytlar[i] = txTampon.hamBaytlar[i];
    }

    std::cout << "--- Alici Tarafinda Cozumlenen Telemetri ---\n";
    std::cout << "Motor Hizi       : " << rxTampon.veri.motorHizi << " RPM\n";
    std::cout << "Govde Sicakligi  : " << static_cast<int>(rxTampon.veri.govdeSicakligi) << " C\n";
    std::cout << "Engel Algilandi  : " << (rxTampon.veri.bayraklar.engelAlgilandi ? "EVET (DUR!)" : "HAYIR") << "\n";
    std::cout << "Surus Modu       : " 
              << (rxTampon.veri.calismaModu == SurucuModu::OTONOM ? "OTONOM SURUS" : "DIGER") << "\n";
    std::cout << "Batarya Seviyesi : %" << static_cast<int>(rxTampon.veri.bataryaSeviyesi) << "\n";
    std::cout << "Direksiyon Acisi : " << (rxTampon.veri.donusAcisi / 10.0) << " derece\n";

    return 0;
}
