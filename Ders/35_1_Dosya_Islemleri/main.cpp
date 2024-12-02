#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream Dosya;

    string satir;

    Dosya.open("deneme.txt");

    while (Dosya){
        getline(cin, satir);
        if(satir == "-1")
            break;
        Dosya << satir << endl;
    }
    Dosya.close();

    ifstream okuDosya;
    okuDosya.open("deneme.txt");

    while (okuDosya){
        getline(okuDosya,satir);
        cout << satir <<endl;
    }
    okuDosya.close();

    return 0;
}
