#include <iostream>
#include <iomanip>

int main() {
    const int SATIR = 3;
    const int SUTUN = 4;

    std::cout << "Ultrasonik Sensör Grid Taraması (" << SATIR << "x" << SUTUN << "):\n";

    for (int i = 0; i < SATIR; i++) {
        for (int j = 0; j < SUTUN; j++) {
            int mesafe = (i + 1) * 10 + (j + 1) * 2; // Simüle edilmiş cm mesafe
            std::cout << std::setw(5) << mesafe;
        }
        std::cout << "\n";
    }

    return 0;
}
