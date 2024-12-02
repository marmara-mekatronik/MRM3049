#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
int fonk(int a, int b);
inline int fonk_inline(int a, int b);

int fonk(int a, int b){
    return (a+b)*(a+b);
}

int fonk_inline(int a, int b){
    return (a+b)*(a+b);
}

#define HESAPLA(x,y) ((x)+(y))*((x)+(y))

int main() {
    chrono::time_point<chrono::system_clock>  d_basla, d_son;
    d_basla = chrono::system_clock::now();
    for (int i = 0; i < 90000; ++i) {
        for (int j = 0; j < 90000; ++j) {
            //fonk(i,j);
            fonk_inline(i,j);
            // HESAPLA(i,j);
        }
    }
    d_son = chrono::system_clock::now();

    chrono::duration<double> gecen_zaman = d_son - d_basla;
    time_t baslangic_zamani = chrono::system_clock::to_time_t(d_basla);
    time_t bitis_zamani = chrono::system_clock::to_time_t(d_son);

    cout<< "Baslangic Zamani :" << ctime(&baslangic_zamani) << endl;
    cout<< "Bitis Zamani :" << ctime(&bitis_zamani) << endl;
    cout<< "Gecen Süre :" << gecen_zaman.count()<<" saniyedir" << endl;
    return 0;
}
