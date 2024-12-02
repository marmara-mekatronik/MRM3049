#include <iostream>

using namespace std;

class Kutu {
public:
    double derinlik;
    double genislik;
    double yukseklik;
    double HacimHesapla(){
        return derinlik * genislik *yukseklik;
    }
};

int main() {
    Kutu kutu_1;
    kutu_1.derinlik=11.5;
    kutu_1.genislik=22.5;
    kutu_1.yukseklik=10.5;
    cout << "Kutunun derinligi : " << kutu_1.derinlik;
    cout << "\nKutunun genisligi : " << kutu_1.genislik;
    cout << "\nKutunun yuksekligi : " << kutu_1.yukseklik;
    cout << "\nKutunun Hacmi : " << kutu_1.HacimHesapla();
    cout << "\n"<<endl;

    Kutu kutu_2;
    kutu_2.derinlik=1.5;
    kutu_2.genislik=2.5;
    kutu_2.yukseklik=1.5;
    cout << "\nKutunun derinligi : " << kutu_2.derinlik;
    cout << "\nKutunun genisligi : " << kutu_2.genislik;
    cout << "\nKutunun yuksekligi : " << kutu_2.yukseklik;
    cout << "\nKutunun Hacmi : " << kutu_2.HacimHesapla();

    return 0;
}
