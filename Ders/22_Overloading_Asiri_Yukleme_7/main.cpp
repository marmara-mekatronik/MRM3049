#include <iostream>

class Kutu {
private:
    double uzunluk, genislik, yukseklik, hacim;

public:
    double getHacim() const;
    Kutu(double u, double g, double y) : uzunluk(u),
    genislik(g), yukseklik(y), hacim(u * g * y) {}

    Kutu &operator+=(const Kutu &x) {
        hacim += x.getHacim();
        return *this;
    }
};

double Kutu::getHacim() const {
    return hacim;
}

int main() {
    Kutu kutu[2] = {{10, 20, 30}, {10, 20, 40}};
    Kutu ToplamKutu(0, 0, 0);

    std::cout << "Kutu 1 Hacmi: " << kutu[0].getHacim() << std::endl;
    std::cout << "Kutu 2 Hacmi: " << kutu[1].getHacim() << std::endl;

    for (int i = 0; i < 2; ++i) {
        ToplamKutu += kutu[i];
    }

    std::cout << "Toplam Kutu Hacmi: " << ToplamKutu.getHacim() << std::endl;

    return 0;
}
