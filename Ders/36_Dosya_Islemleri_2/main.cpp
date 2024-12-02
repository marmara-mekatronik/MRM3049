#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char dizi[100];
    fstream st;
    st.open("./dosya.dat",ios::out);
    cout << "Yeni Dosya oluşturululdu\n";
    st << "Merhaba Dünya! Nasılsın?";
    st.close();
    st >> dizi ;
    st.open("./dosya.dat",ios::out);
    st >> dizi;
    cout << dizi << endl ;
    return 0;
}
