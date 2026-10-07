#include <iostream>

int main() {
    int n = 20;

    std::cout << "1-" << n << " Arası FizzBuzz Algoritması:\n";

    for (int i = 1; i <= n; i++) {
        // Kritik Sıralama: En özel durum (3 ve 5 ortak katı) en başta denetlenmeli!
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz\n";
        } else if (i % 3 == 0) {
            std::cout << "Fizz\n";
        } else if (i % 5 == 0) {
            std::cout << "Buzz\n";
        } else {
            std::cout << i << "\n";
        }
    }

    return 0;
}
