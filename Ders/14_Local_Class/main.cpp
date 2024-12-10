#include <iostream>
using namespace std;
void setAyar(int setSicaklik);

void setAyar(int setSicaklik) {
    class Klima {
    public:
        int sicaklik;
    };
    Klima klimalar[10];
    for (int i = 0; i < sizeof(klimalar)/sizeof(Klima); i++) {
    klimalar[i].sicaklik = setSicaklik;
cout<< "Klima "<< i+1<< ":" <<
        klimalar[i].sicaklik << " dereceye ayarlandı" << endl;
    }
}
int main() {
setAyar(24);
    return 0;
}
