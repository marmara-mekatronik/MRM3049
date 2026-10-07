#include <iostream>

int main() {
    char komut = 'W';

    std::cout << "Robot Komut Arayüzü\n";
    std::cout << "Alınan Komut: '" << komut << "'\n";

    switch (komut) {
        case 'W':
        case 'w':
            std::cout << "[EYLEM]: Robot ileri hareket ediyor.\n";
            break;
        case 'S':
        case 's':
            std::cout << "[EYLEM]: Robot geri hareket ediyor.\n";
            break;
        case 'A':
        case 'a':
            std::cout << "[EYLEM]: Robot sola dönüyor.\n";
            break;
        case 'D':
        case 'd':
            std::cout << "[EYLEM]: Robot sağa dönüyor.\n";
            break;
        case 'X':
        case 'x':
            std::cout << "[ACİL E-STOP]: Tüm eyleyiciler durduruldu!\n";
            break;
        default:
            std::cout << "[HATA]: Tanımsız komut karakteri!\n";
            break;
    }

    return 0;
}
