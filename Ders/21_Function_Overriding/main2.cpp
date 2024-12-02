#include <iostream>

using namespace std;

class memeli {
public:
    void yaz(int x = 10) {
        cout << "X'in degeri: " << x << endl;
    }
};

class yarasa : public memeli {
public:
    void yaz(int x) {
        memeli::yaz(x);
    }

public:

};

int main() {
    yarasa y1;
    y1.yaz(50);
    y1.memeli::yaz();
    return 0;
}
