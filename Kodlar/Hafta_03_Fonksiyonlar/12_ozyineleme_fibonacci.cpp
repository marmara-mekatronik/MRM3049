/**
 * @file 12_ozyineleme_fibonacci.cpp
 * @brief Fibonacci hesaplaması: Özyinelemeli yaklaşım ve zaman karmaşıklığı analizi
 * @course Nesne Yönelimli Programlama - Hafta 3
 */

#include <iostream>

long long fibonacci(int n) {
    // Taban durumlar
    if (n <= 0) return 0;
    if (n == 1) return 1;

    // Özyinelemeli adım O(2^n)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    std::cout << "=== Ozyinelemeli Fibonacci Serisi ===\n";

    std::cout << "Ilk 12 Fibonacci Terimi:\n";
    for (int i = 0; i < 12; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << "\n";

    return 0;
}
