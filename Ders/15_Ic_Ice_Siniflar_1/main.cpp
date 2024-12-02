#include <iostream>
using namespace std;
class DisSinif{
private:
    int ozelUye;
public:
    DisSinif(int deger):ozelUye(deger){}
    class IcSinif{
    public:
        void GosterDisSinif(DisSinif& disSinif){
            cout<< "IcSinif, Dissinifa'a erisim:" << disSinif.ozelUye << endl;
        }
    };
    void GosterIcSinif(){
        IcSinif icSinif;
        icSinif.GosterDisSinif(*this);
    }
};

int main() {
    DisSinif disNesne(55);
    disNesne.GosterIcSinif();
    return 0;
}
