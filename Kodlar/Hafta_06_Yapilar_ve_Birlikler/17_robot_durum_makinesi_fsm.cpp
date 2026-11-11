/**
 * @file 17_robot_durum_makinesi_fsm.cpp
 * @brief Mekatronik Vaka Analizi 2: enum class ve struct tabanlı Robot Sonlu Durum Makinesi (FSM)
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <cstdint>

enum class RobotDurum : uint8_t {
    Baslatma,
    Bekleme,
    Gorevde,
    AcilDurdurma
};

struct RobotBaglami {
    RobotDurum durum;
    double     hedefHizMsn;
    bool       engelAlgilandi;
};

void durumGuncelle(RobotBaglami& robot) {
    if (robot.engelAlgilandi) {
        robot.durum = RobotDurum::AcilDurdurma;
        robot.hedefHizMsn = 0.0;
    }

    switch (robot.durum) {
        case RobotDurum::Baslatma:
            std::cout << "[FSM] Sensor kalibrasyonu yapiliyor... Bekleme moduna gecildi.\n";
            robot.durum = RobotDurum::Bekleme;
            break;
        case RobotDurum::Bekleme:
            std::cout << "[FSM] Sistem hazir, gorev komutu bekleniyor.\n";
            break;
        case RobotDurum::Gorevde:
            std::cout << "[FSM] Otonom hareket suruyor. Hedef Hiz: "
                      << robot.hedefHizMsn << " m/s\n";
            break;
        case RobotDurum::AcilDurdurma:
            std::cout << "[E-STOP] Engel algilandi! Frenler kilitlendi, Hiz: 0 m/s\n";
            break;
    }
}

int main() {
    RobotBaglami agv = {RobotDurum::Baslatma, 0.0, false};

    durumGuncelle(agv); // Baslatma -> Bekleme
    durumGuncelle(agv); // Bekleme

    agv.durum = RobotDurum::Gorevde;
    agv.hedefHizMsn = 1.5;
    durumGuncelle(agv); // Gorevde (1.5 m/s)

    agv.engelAlgilandi = true;
    durumGuncelle(agv); // AcilDurdurma (E-Stop)

    return 0;
}
