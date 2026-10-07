#include <iostream>

int main() {
    std::cout << "Paket Analizi Başlatıldı (1..10):\n";

    for (int paketNo = 1; paketNo <= 10; paketNo++) {
        // continue: Hatalı/Gürültülü paketleri atla, döngü başına dön
        if (paketNo == 4 || paketNo == 7) {
            std::cout << "Paket " << paketNo << ": [BOZUK] Atlandı (continue).\n";
            continue;
        }

        // break: Kritik güvenlik paketinde döngüyü tamamen sonlandır
        if (paketNo == 9) {
            std::cout << "Paket " << paketNo << ": [KRİTİK HATA] İletişim koptu! Döngüden çıkılıyor (break).\n";
            break;
        }

        std::cout << "Paket " << paketNo << ": Başarıyla işlendi.\n";
    }

    return 0;
}
