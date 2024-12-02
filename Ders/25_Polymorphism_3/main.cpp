#include <iostream>

using namespace std;
class Hayvan{
public:
    virtual string konusma(){
        return "Konusamiyor";
    }
};
class Kedi: public Hayvan{
public:
    string konusma() override{
        return "Miyav Miyav";
    }
};

class Kopek: public Hayvan{
public:
    string konusma() override{
        return "Hav Hav";
    }
};

class Kurt: public Hayvan{
public:
    string konusma()override{
        return "Ouu Ouu";
    }
};
int main() {

    Hayvan *ptrDiziHayvan[3];
    ptrDiziHayvan[0]=new Kedi();
    ptrDiziHayvan[1]=new Kopek();
    ptrDiziHayvan[2]=new Kurt();

    for (int i = 0; i < 3; ++i) {
        cout<< ptrDiziHayvan[i]->konusma() << endl;
    }
    return 0;
}
