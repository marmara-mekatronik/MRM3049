#include <iostream>

// Geleneksel C-tarzı numaralandırma (Unscoped Enum)
enum RobotSurusModu {
    DURDURULDU = 0,
    DUZ_SURUS   = 1,
    GERI_SURUS  = 2,
    ACIL_FREN   = 99
};

// Varsayılan numaralandırma (0'dan başlayarak 1'er artar)
enum SensorKanali {
    KANAL_VOLTAJ,   // 0
    KANAL_AKIM,     // 1
    KANAL_SICAKLIK  // 2
};

int main() {
    std::cout << "====================================================\n";
    std::cout << "  C++ Hafta 6: Geleneksel enum ve Durum Denetimi\n";
    std::cout << "====================================================\n\n";

    RobotSurusModu mod = DUZ_SURUS;

    std::cout << "[1] Sayisal Deger:\n";
    std::cout << "    Mevcut Mod Kodu : " << mod << " (int olarak basilabilir)\n\n";

    std::cout << "[2] switch-case ile Durum Denetimi:\n";
    switch (mod) {
        case DURDURULDU:
            std::cout << "    [DURUM] Robot beklemede.\n"; break;
        case DUZ_SURUS:
            std::cout << "    [DURUM] Robot ileri yonde hareket ediyor.\n"; break;
        case GERI_SURUS:
            std::cout << "    [DURUM] Robot geri manevra yapiyor.\n"; break;
        case ACIL_FREN:
            std::cout << "    [ALARM] E-STOP devrede! Frenler kilitli.\n"; break;
    }

    std::cout << "\n[3] Varsayilan Numaralandirma Degerleri:\n";
    std::cout << "    KANAL_VOLTAJ   : " << KANAL_VOLTAJ << "\n";
    std::cout << "    KANAL_AKIM     : " << KANAL_AKIM << "\n";
    std::cout << "    KANAL_SICAKLIK : " << KANAL_SICAKLIK << "\n";

    return 0;
}
