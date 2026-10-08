#pragma once

constexpr double PI = 3.14159265358979323846;

struct EklemAcilari {
    double eklem1;
    double eklem2;
    double eklem3;
};

double dereceToRadyan(double derece);
double radyanToDerece(double radyan);
bool kinematikLimitKontrol(const EklemAcilari& acilar, double minAci, double maxAci);
