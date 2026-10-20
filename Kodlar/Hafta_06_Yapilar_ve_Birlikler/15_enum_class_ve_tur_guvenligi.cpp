/**
 * @file 15_enum_class_ve_tur_guvenligi.cpp
 * @brief Geleneksel enum vs Modern C++11 enum class, taban tür ve using takma adları
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <cstdint>

// 1. Geleneksel C-tarzi enum (Kapsam kirliligi ve zayif tip denetimi)
enum EskiMotorDurumu {
    DURDU,
    CALISIYOR,
    HATA
};

// 2. Modern C++11 enum class: Taban turu 1 byte (uint8_t) olarak sabitlenmis
enum class YeniMotorDurumu : uint8_t {
    Durdu = 0x00,
    Calisiyor = 0x01,
    Hata = 0x02
};

enum class SensorDurumu : uint8_t {
    Beklemede = 0x00,
    Calisiyor = 0x01, // Isim cakismasi OLMAZ! Kendi kapsamina aittir
    Hata = 0x02
};

// 3. Modern using ile tur takma adi tanimlama
using DurumKodu = YeniMotorDurumu;

int main() {
    // Geleneksel enum riskleri: Tamsayiya sessizce donusur
    int sayi = CALISIYOR; // Guvensiz ortuk donusum!
    std::cout << "Eski enum degeri int oldu: " << sayi << "\n";

    // Modern enum class: Guvenli kapsam ve tur korumasi
    YeniMotorDurumu motorDurumu = YeniMotorDurumu::Calisiyor;
    SensorDurumu sensorDurumu = SensorDurumu::Calisiyor;

    std::cout << "--- Modern enum class Guvenligi ---\n";
    std::cout << "sizeof(YeniMotorDurumu): " << sizeof(YeniMotorDurumu) << " bayt\n";

    // Acik tur donusumu ile tamsayi degerlerini okuma:
    uint8_t hamDeger = static_cast<uint8_t>(motorDurumu);
    uint8_t sensorHam = static_cast<uint8_t>(sensorDurumu);
    std::cout << "Motor Durumu Ham Kodu  : 0x" << std::hex << static_cast<int>(hamDeger) << "\n";
    std::cout << "Sensor Durumu Ham Kodu : 0x" << std::hex << static_cast<int>(sensorHam) << "\n";

    // using takma adi ile bildirim:
    DurumKodu sonDurum = DurumKodu::Hata;
    if (sonDurum == YeniMotorDurumu::Hata) {
        std::cout << "Acil durum: Motor hata kodunda!\n";
    }

    return 0;
}
