#include <iostream>
using namespace std;
class CepTelefonu {
public:
    void setYaz(string, string, int, int);
    void getBilgi();
    CepTelefonu(string, string, int, int);
    ~CepTelefonu();
private:
    string Marka;
    string Model;
    int RAM;
    int DiskBoyutu;
};

void CepTelefonu::setYaz(string xMarka, string xModel, int xRAM, int xDiskBoyutu) {
    Marka = xMarka;
    Model = xModel;
    RAM = xRAM;
    DiskBoyutu = xDiskBoyutu;
}

void CepTelefonu::getBilgi() {
    cout << Marka << endl;
    cout << Model << endl;
    cout << RAM << endl;
    cout << DiskBoyutu << endl;

}

CepTelefonu::CepTelefonu(string yMarka, string yModel, int yRAM, int yDiskBoyutu) {
    Marka = yMarka;
    Model = yModel;
    RAM = yRAM;
    DiskBoyutu = yDiskBoyutu;
    cout << "Nesne Olusturuldu..." << endl;
}

CepTelefonu::~CepTelefonu() {
    cout << "\nnesne silindi..." << endl;
}

int main() {
//    CepTelefonu Samsung("Samsung", "S21", 6, 128);
//    Samsung.getBilgi();
    CepTelefonu *Xiaomi = new CepTelefonu("Xiaomi", "10T", 6, 128);
    Xiaomi->getBilgi();
    delete Xiaomi;
    return 0;
}
