#include <iostream>
#include <fstream>

using namespace std;

int main() {

    fstream Dosya;
    Dosya.open("deneme.txt", fstream::trunc | fstream::in | fstream::out);
    if (Dosya.is_open()) {
        cout << "Dosya Açıldı" << endl;
        string satir;

        // YAZMA

        while (Dosya) {
            getline(cin, satir);
            if (satir == "-Q")
                break;
            Dosya << satir << endl;
        }

        // OKUMA
        int pozisyon = Dosya.tellg();
        cout << "dosyanin bulunduğu pozisyon : " << pozisyon << endl;
        Dosya.seekg(pozisyon - 10, fstream::beg);
        while (Dosya) {
            getline(Dosya, satir);
            cout << satir << endl;
        }

    } else {
        cout << "Dosya Açılırken hata oluştu" << endl;
    }
 
    Dosya.close();

    return 0;
}
