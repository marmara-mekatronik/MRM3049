#include <fstream>
#include <iostream>

using namespace std;

int main() {
char data[100];
ofstream cikti_dosya;
cikti_dosya.open("dosya.dat");

cout << " Dosya Oluşturuluyor..." << endl;
cout << "Adınız : " ;
cin.getline(data,100);

cikti_dosya << data << "\t \t";

cout << "Yaşınızı Giriniz : " ;
cin >> data;
cin.ignore();

cikti_dosya << data << endl;

cikti_dosya.close();

ifstream giris_dosya;
giris_dosya.open("dosya.dat");
cout << " Dosya Okunuyor..." << endl;

giris_dosya >> data;
cout << data << endl;
giris_dosya >> data;
cout << data ;

giris_dosya.close();

return 0;
}
