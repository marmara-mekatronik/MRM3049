#include <iostream>

int main() {
    double basinc = 4.2;      // Bar
    double sicaklik = 85.0;    // °C
    bool acilDurdurma = false;

    // && (VE) Operatörü: İki koşul da true olmalı
    if (sicaklik > 80.0 && basinc > 4.0) {
        std::cout << "[KRİTİK UYARI]: Yüksek basınç ve yüksek sıcaklık birlikte algılandı!\n";
        acilDurdurma = true;
    }

    // || (VEYA) Operatörü: En az biri true ise
    if (acilDurdurma || basinc > 5.0) {
        std::cout << "[GÜVENLİK SİSTEMİ]: Valfler derhal tahliye moduna geçirildi.\n";
    }

    // Kısa Devre Örneği: payda sıfır ise sağ taraf asla çalıştırılmaz (güvenli)
    int pay = 100, payda = 0;
    if (payda != 0 && (pay / payda > 2)) {
        std::cout << "Bölüm geçerli.\n";
    } else {
        std::cout << "Savunmacı kontrol: Sıfıra bölme hatası önlendi.\n";
    }

    return 0;
}
