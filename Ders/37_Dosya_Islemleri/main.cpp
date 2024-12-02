#include <iostream>
#include <fstream>

using namespace std;

struct Kisi {
    char Adi[50];
    int Yasi;
};


int main() {
    Kisi ogrenci1 = {"Ali", 15};
    Kisi *ptrOgrenci = &ogrenci1;

    fstream Dosya;
    Dosya.open("deneme.bin", fstream::binary | fstream::out);
    if (Dosya.is_open()) {
        cout << "Dosya başarı ile Açıldı" << endl;
        Dosya.write((char *) (ptrOgrenci), sizeof(ogrenci1));

        Dosya.seekg(0, Dosya.end);
        int boyut = Dosya.tellg();
        Dosya.seekg(0, Dosya.beg);
        cout << "Dosya Boyutu:" << boyut << endl;
        Dosya.close();
        ogrenci1 = {};

    } else {
        cout << "Dosya acilamadi" << endl;
    }

    Dosya.open("deneme.bin", fstream::binary | fstream::in);
    Dosya.read((char *) (ptrOgrenci), sizeof(ogrenci1));
    cout << "Ogrenci Adi:" << ptrOgrenci->Adi << endl;
    cout << "Ogrenci yasi:" << ptrOgrenci->Yasi << endl;
    Dosya.close();
    return 0;
}

