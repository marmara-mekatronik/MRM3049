//
// Created by hyuce on 7.01.2021.
//

#ifndef INC_1_KUTUPHANE_1_ILK_BASLIK_H
#define INC_1_KUTUPHANE_1_ILK_BASLIK_H

namespace S{
    class Sekil{
    public:
        Sekil(int g=0, int y=0);
        void setBoyut(int g=0, int y=0);
        int Alan();

    private:
        int genislik, yukseklik;
    };
    Sekil::Sekil(int g, int y) {
        genislik=g;
        yukseklik=y;
    }
int Sekil::Alan() {
    return genislik*yukseklik;
}
void Sekil::setBoyut(int g, int y) {
    genislik=g;
    yukseklik=y;
    }
}


#endif //INC_1_KUTUPHANE_1_ILK_BASLIK_H
