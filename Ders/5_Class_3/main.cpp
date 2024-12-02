#include <iostream>
#include <cstdint>

using namespace std;

class tarih {
private:
    int Gun;
    int Ay;
    int Yil;
public:
    tarih(int _gun,int _ay, int _yil) {
        Gun=_gun; Ay=_ay; Yil=_yil;
    }
    void goster() {
        cout << Gun<<"/"<<Ay<<"/"<<Yil<<endl;
    }
    void ayarla(int _gun,int _ay, int _yil) {
        Gun=_gun; Ay=_ay; Yil=_yil;
    }
};

int main() {
   tarih* bayram= new tarih(03,04,2025);
    bayram->goster();
    bayram->ayarla(27,9,2025);
    bayram->goster();
    delete bayram;

    tarih yilbasi(31,12,2024);
    yilbasi.goster();
    yilbasi.ayarla(01,01,2025);
    yilbasi.goster();

    return 0;
}
