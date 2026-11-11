#include <iostream>
#include <iomanip>
#include <cstdint>

// Birlik (union) ile çalışma zamanında Endian mimarisi tespiti
union EndianDedektor {
    uint16_t tamKelime; // 2 Bayt: 0x0102 (MSB: 0x01, LSB: 0x02)
    uint8_t  baytlar[2]; // 2 x 1 Bayt
};

// 32-bit float sensör telemetrisini Little-Endian baytlara ayrıştırma
union TelemetriFloat {
    float   gerilim;
    uint8_t hamBaytlar[4];
};

int main() {
    std::cout << "====================================================\n";
    std::cout << "  C++ Hafta 6: Endian Testi ve Bayt Siralamasi\n";
    std::cout << "====================================================\n\n";

    // 1. İşlemci Endian Mimarisi Kontrolü
    EndianDedektor test;
    test.tamKelime = 0x0102;

    std::cout << "[1] Islemci Endianlik Tespiti:\n";
    std::cout << "    Sayisal Deger : 0x0102\n";
    std::cout << "    baytlar[0]    : 0x" << std::hex << (int)test.baytlar[0] << "\n";
    std::cout << "    baytlar[1]    : 0x" << std::hex << (int)test.baytlar[1] << std::dec << "\n";

    if (test.baytlar[0] == 0x02) {
        std::cout << "    Sonuc         : LITTLE-ENDIAN (LSB en kucuk adreste yerlesir)\n";
        std::cout << "    (x86, x64 ve ARM Cortex-M standart mimarisi)\n\n";
    } else {
        std::cout << "    Sonuc         : BIG-ENDIAN (MSB en kucuk adreste yerlesir)\n";
        std::cout << "    (Ag protokolleri ve bazi DSP mimarileri)\n\n";
    }

    // 2. 32-Bit Sensör Verisinin UART Seri İletim Sırası
    TelemetriFloat sensor;
    sensor.gerilim = 45.75f; // IEEE 754 tek duyarlıklı: 0x42370000

    std::cout << "[2] 32-Bit Float Sensor Verisinin Little-Endian Siralamasi:\n";
    std::cout << "    Float Deger   : " << sensor.gerilim << " V\n";
    std::cout << "    IEEE-754 Hex  : 0x42370000\n";
    std::cout << "    UART TX Sirasi: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << "0x" << std::hex << std::uppercase << std::setw(2)
                  << std::setfill('0') << static_cast<int>(sensor.hamBaytlar[i]) << " ";
    }
    std::cout << std::dec << "\n";
    std::cout << "    Aciklama: En dusuk anlamli bayt (0x00) hattan ilk cikan bayttir.\n";

    return 0;
}
