#include <iostream>
#include <cstdint>

using namespace  std;
class insan {
private:
    string adi;
    int yas;
public:
    insan(string adi_, int yas_) {
        adi = adi_;
        yas = yas_;
    }
   ~insan() {
        cout <<"Nesne Kaldırıldı"<<endl;
    }
void get_insan() {
        cout<<"Adi:" <<adi<<endl;
        cout<<"Yas:"<<yas<<endl;
    }
    void set_yas(int yas_) {
        yas = yas_;
    }
};

int main() {
 insan* ahmet=new insan("Ahmet",27);
    ahmet->get_insan();
    ahmet->set_yas(57);
    ahmet->get_insan();
    delete ahmet;
    return 0;
}
