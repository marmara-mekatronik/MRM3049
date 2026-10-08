#include "robot_kinematik.h"

double dereceToRadyan(double derece) {
    return derece * (PI / 180.0);
}

double radyanToDerece(double radyan) {
    return radyan * (180.0 / PI);
}

bool kinematikLimitKontrol(const EklemAcilari& acilar, double minAci, double maxAci) {
    if (acilar.eklem1 < minAci || acilar.eklem1 > maxAci) return false;
    if (acilar.eklem2 < minAci || acilar.eklem2 > maxAci) return false;
    if (acilar.eklem3 < minAci || acilar.eklem3 > maxAci) return false;
    return true;
}
