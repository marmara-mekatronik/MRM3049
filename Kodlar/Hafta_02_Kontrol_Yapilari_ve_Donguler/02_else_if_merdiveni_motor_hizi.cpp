#include <iostream>

int main() {
    int pwmDegeri = 180; // 0-255 PWM

    std::cout << "PWM Girişi: " << pwmDegeri << "\n";

    if (pwmDegeri <= 0) {
        std::cout << "Motor Durumu: DURDU (0 RPM)\n";
    } else if (pwmDegeri < 100) {
        std::cout << "Motor Durumu: DÜŞÜK HIZ (Mod 1)\n";
    } else if (pwmDegeri < 200) {
        std::cout << "Motor Durumu: ORTA HIZ (Mod 2)\n";
    } else if (pwmDegeri <= 255) {
        std::cout << "Motor Durumu: TAM GÜÇ (Mod 3)\n";
    } else {
        std::cout << "[HATA]: Geçersiz PWM sinyali (0-255 aralığı dışında)!\n";
    }

    return 0;
}
