#include <iostream>

class Kare;

class Dikdortgen {
public:
    Dikdortgen(int uzunluk, int genislik) : uzunluk(uzunluk), genislik(genislik) {}

    friend void KareAlanHesapla(const Kare& kare, const Dikdortgen& dikdortgen);

private:
    int uzunluk;
    int genislik;
};

class Kare {
public:
    Kare(int kenar) : kenarUzunlugu(kenar) {}

    friend void KareAlanHesapla(const Kare& kare, const Dikdortgen& dikdortgen);

private:
    int kenarUzunlugu;
};

void KareAlanHesapla(const Kare& kare, const Dikdortgen& dikdortgen) {
    int kareAlani = kare.kenarUzunlugu * kare.kenarUzunlugu;
    int dikdortgenAlani = dikdortgen.uzunluk * dikdortgen.genislik;

    std::cout << "Kare Alanı: " << kareAlani << std::endl;
    std::cout << "Dikdörtgen Alanı: " << dikdortgenAlani << std::endl;
}

int main() {
    Kare kare(5);
    Dikdortgen dikdortgen(10, 20);

    KareAlanHesapla(kare, dikdortgen);

    return 0;
}
