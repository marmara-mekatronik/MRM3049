#include <iostream>

int main() {
    int pwmKademeleri[] = {0, 64, 128, 192, 255};

    std::cout << "PWM Hız Kademeleri Taranıyor (C++11 Range-based for):\n";

    // Dizi elemanları otomatik taranır (indis karmaşası olmadan):
    for (int kademe : pwmKademeleri) {
        double gerilim = (kademe / 255.0) * 5.0; // 0-5V DAC ölçekleme
        std::cout << "PWM: " << kademe << " -> Analog Gerilim: " << gerilim << " V\n";
    }

    return 0;
}
