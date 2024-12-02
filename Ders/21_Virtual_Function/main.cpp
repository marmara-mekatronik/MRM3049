#include <iostream>

using namespace std;

class Temel {
public:
virtual void yaz() {
        cout << "Temel Fonksiyon" << endl;
    }
};

class Turetilmis : public Temel {
public:
    void yaz() {
        cout << "Turetilmis Fonksiyon" << endl;
    }

public:

};

int main() {
    Turetilmis T1;
    Temel* ptr = &T1;
    ptr->yaz();

    return 0;
}
