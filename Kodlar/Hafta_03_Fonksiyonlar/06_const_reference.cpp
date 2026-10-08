/**
 * @file 06_const_reference.cpp
 * @brief const Referans ile aktarım: Sıfır kopyalama maliyeti + Salt okunur veri güvenliği
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

struct TelemetriPaketi {
    int paketId;
    double sicaklik;
    double basinc;
    double ivme[3];
};

// const TelemetriPaketi&: Büyük yapı kopyalanmaz (8 bayt adres taşınır)
// ve fonksiyon içinde yanlışlıkla değiştirilemez!
void telemetriRaporla(const TelemetriPaketi& p) {
    std::cout << "Paket #" << p.paketId << " Telemetri Raporu:\n";
    std::cout << "  Sicaklik : " << p.sicaklik << " C\n";
    std::cout << "  Basinc   : " << p.basinc << " kPa\n";
    std::cout << "  Ivme     : [" << p.ivme[0] << ", " << p.ivme[1] << ", " << p.ivme[2] << "] m/s^2\n";
    
    // p.sicaklik = 0.0; // DERLEME HATASI! const koruması devrededir.
}

int main() {
    std::cout << "=== const Referans ile Aktarim ===\n";

    TelemetriPaketi tel1 = {101, 36.8, 101.3, {0.12, -0.05, 9.81}};
    telemetriRaporla(tel1);

    return 0;
}
