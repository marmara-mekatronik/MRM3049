#include <iostream>
#include "robot_kinematik.h"

int main() {
    std::cout << "=== Moduler Robot Kinematik Modulu ===\n";

    EklemAcilari hedef = {45.0, 90.0, -30.0};

    if (kinematikLimitKontrol(hedef, -90.0, 90.0)) {
        std::cout << "Eklem 1: " << hedef.eklem1 << " deg = " << dereceToRadyan(hedef.eklem1) << " rad\n";
        std::cout << "Eklem 2: " << hedef.eklem2 << " deg = " << dereceToRadyan(hedef.eklem2) << " rad\n";
        std::cout << "Eklem 3: " << hedef.eklem3 << " deg = " << dereceToRadyan(hedef.eklem3) << " rad\n";
    } else {
        std::cout << "[HATA] Eklem acilari limit disinda!\n";
    }

    return 0;
}
