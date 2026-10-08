/**
 * @file 15_robot_3eksen_konumlandirma.cpp
 * @brief Laboratuvar Alıştırması: Kartezyen robot 3 eksen konumlandırma ve limit denetimi
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>
#include <cmath>

bool konumaGit(int& curX, int& curY, int& curZ,
               int targetX, int targetY, int targetZ, int limit) {
    if (std::abs(targetX) > limit || std::abs(targetY) > limit || std::abs(targetZ) > limit) {
        return false; // Limit aşıldı
    }
    curX = targetX;
    curY = targetY;
    curZ = targetZ;
    return true;
}

int main() {
    std::cout << "=== Robot 3 Eksen Konumlandirma ===\n";

    int x = 0, y = 0, z = 0;
    std::cout << "Baslangic Konumu: (" << x << ", " << y << ", " << z << ")\n";

    // Guvenli hareket denemesi (Limit: 200 mm)
    if (konumaGit(x, y, z, 150, -80, 40, 200)) {
        std::cout << "[BASARILI] Yeni Konum: (" << x << ", " << y << ", " << z << ")\n";
    } else {
        std::cout << "[HATA] Hedef limit disinda!\n";
    }

    // Guvensiz hareket denemesi
    if (konumaGit(x, y, z, 250, 0, 0, 200)) {
        std::cout << "[BASARILI] Yeni Konum: (" << x << ", " << y << ", " << z << ")\n";
    } else {
        std::cout << "[ENGEL] Hedef 250 mm limit disinda (Maksimum: 200 mm)! Konum korunuyor: ("
                  << x << ", " << y << ", " << z << ")\n";
    }

    return 0;
}
