#include <iostream>
#include <iomanip>
#ifdef _WIN32
#include <windows.h>
#endif
#ifdef __unix__
#include <unistd.h>
#endif

using namespace std;

class Zaman {
public:
    void gosterZaman();

    Zaman() {
        saat = 0;
        dakika = 0;
    }

    Zaman(int s, int d) {
        saat = s;
        dakika = d;
    }

    Zaman operator++() {
        ++dakika;
        if (dakika >= 60) {
            ++saat;
            dakika -= 60;
        }
        return Zaman(saat, dakika);
    }

private:
    int saat, dakika;
};

void Zaman::gosterZaman() {
    cout << setw(2) << setfill('0') << saat << " : " << setw(2)
         << setfill('0') << dakika << "\r";
}

int main() {
    Zaman Z1(01, 59);

    for (int i = 0; i < 120; ++i) {
        ++Z1;
        Z1.gosterZaman();
#ifdef _WIN32
        // Windows özel kodu
        Sleep(100); // 1 saniye bekletme
#endif

#ifdef __unix__
        // UNIX özel kodu
    sleep(1); // 1 saniye bekletme
#endif
    }
    return 0;
}
