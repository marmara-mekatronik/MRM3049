/**
 * @file 08_varsayilan_argumanlar.cpp
 * @brief Varsayılan argümanlar (Default Arguments) ve sağdan-sola kuralı
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

// Varsayılan değerler her zaman parametre listesinin en sağında olmalıdır
void motorSur(int motorId, int pwm = 128, bool yonIleri = true) {
    std::cout << "[MOTOR " << motorId << "] ";
    std::cout << "PWM: " << pwm << " | ";
    std::cout << "Yon: " << (yonIleri ? "ILERI" : "GERI") << "\n";
}

int main() {
    std::cout << "=== Varsayilan Argumanlar ===\n";

    // Tüm varsayılanlar kullanılır (pwm=128, yon=ILERI)
    motorSur(1);

    // pwm belirtilir, yön varsayılan kalır (pwm=200, yon=ILERI)
    motorSur(2, 200);

    // Tümü açıkça belirtilir (pwm=255, yon=GERI)
    motorSur(3, 255, false);

    return 0;
}
