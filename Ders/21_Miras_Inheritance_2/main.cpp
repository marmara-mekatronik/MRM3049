#include <iostream>
using namespace std;

// Temel sınıf: Sekil
class Sekil {
public:
    void setGenislik(int g);
    void setYukseklik(int y);
    int getGenislik() const;
    int getYukseklik() const;

protected:
    int genislik = 0, yukseklik = 0; // Varsayılan başlangıç değeri
};

// Sekil sınıfı fonksiyonlarının tanımları
void Sekil::setGenislik(int g) {
    genislik = g;
}
void Sekil::setYukseklik(int y) {
    yukseklik = y;
}
int Sekil::getGenislik() const {
    return genislik;
}
int Sekil::getYukseklik() const {
    return yukseklik;
}

// Ek sınıf: Deger
class Deger {
public:
    void setBirimDeger(int deger);
    int getBirimDeger() const;
    int hesaplaDeger(int alan) const;

private:
    int birimDeger = 100; // Varsayılan birim değeri
};

// Deger sınıfı fonksiyonlarının tanımları
void Deger::setBirimDeger(int deger) {
    birimDeger = deger;
}
int Deger::getBirimDeger() const {
    return birimDeger;
}
int Deger::hesaplaDeger(int alan) const {
    return alan * birimDeger;
}

// Türetilmiş sınıf: Dikdortgen
class Dikdortgen : public Sekil, public Deger {
public:
    int getAlan() const;
};

// Dikdortgen sınıfı fonksiyonunun tanımı
int Dikdortgen::getAlan() const {
    return genislik * yukseklik;
}

// Ana program (main)
int main() {
    Dikdortgen dikdortgen;

    // Değerlerin atanması
    dikdortgen.setGenislik(5);
    dikdortgen.setYukseklik(15);
    dikdortgen.setBirimDeger(200); // Birim değeri güncelleniyor

    // Hesaplamalar
    int alan = dikdortgen.getAlan();
    int fiyat = dikdortgen.hesaplaDeger(alan);

    // Sonuçların ekrana yazdırılması
    cout << "Dikdörtgenin Genişliği: " << dikdortgen.getGenislik() << endl;
    cout << "Dikdörtgenin Yüksekliği: " << dikdodtgen.getYukseklik() << endl;
    cout << "Dikdörtgenin Alanı: " << dikdortgen.getAlan() << endl;

    return 0;
}
