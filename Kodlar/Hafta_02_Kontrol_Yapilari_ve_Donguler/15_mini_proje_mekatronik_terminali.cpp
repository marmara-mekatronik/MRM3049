#include <iostream>

int main() {
    int mod = 1; // 1: Bekleme, 2: Kalibrasyon, 3: Çalışma, 0: Çıkış
    int iterasyon = 0;

    std::cout << "========================================\n";
    std::cout << "   MEKATRONİK SİSTEM KONTROL TERMİNALİ   \n";
    std::cout << "========================================\n";

    while (mod != 0 && iterasyon < 4) {
        iterasyon++;
        switch (mod) {
            case 1:
                std::cout << "[DURUM 1 - BEKLEME]: Sensörler hazır. Kalibrasyona geçiliyor...\n";
                mod = 2; // Durum geçişi
                break;
            case 2:
                std::cout << "[DURUM 2 - KALİBRASYON]: ADC ofsetleri sıfırlandı. Çalışma moduna geçiliyor...\n";
                mod = 3; // Durum geçişi
                break;
            case 3:
                std::cout << "[DURUM 3 - ÇALIŞMA]: PID motor çevrimi aktif. Görev tamamlandı.\n";
                mod = 0; // Durum geçişi: Çıkış
                break;
            default:
                std::cout << "[HATA]: Bilinmeyen durum! Acil durdurma.\n";
                mod = 0;
                break;
        }
    }

    std::cout << "Sistem güvenle kapatıldı.\n";
    return 0;
}
