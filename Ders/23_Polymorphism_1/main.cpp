#include <iostream>
using namespace std;
class Insan{
public:
    virtual string konusma (){
        return "Kanusamiyor";
    }
};

class Turk:Insan{
public:
    string konusma () override{
        return "Merhaba";
    }
};

class Ingiliz:Insan{
public:
    string konusma () override{
        return "Hello";
    }
};

class Alman:Insan{
public:
    string konusma () override{
        return "Hallo";
    }
};

int main() {
    Insan insan1;
    Turk turk1;
    Ingiliz ingiliz1;
    Alman alman1;
    cout << "Insan :" << insan1.konusma()<< endl;
    cout << "Turk :" << turk1.konusma()<< endl;
    cout << "Ingiliz :" << ingiliz1.konusma()<< endl;
    cout << "Alman :" << alman1.konusma()<< endl;
    return 0;
}
