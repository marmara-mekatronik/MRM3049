#include <iostream>
using namespace std;
void hesapla(int setSicaklik);
void hesapla(int setSicaklik){
class Klima{
public:
    int sicaklik;
};
Klima klimalar[10];
    for (int i = 0; i < sizeof(klimalar)/ sizeof(Klima); ++i) {
        klimalar[i].sicaklik=setSicaklik;
        cout << "Klima " << i+1 << ": " <<
        klimalar[i].sicaklik<< " set edildi " << endl;
    }
}

int main() {
    hesapla(15);
    return 0;
}
