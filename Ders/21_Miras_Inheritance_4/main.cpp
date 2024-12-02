#include <iostream>

using namespace std;

class memeli {
public:
    void ucur() {
        cout << " bazi memeliler ucar" << endl;
    }
};

class kanatli {
public:
    void ucur() {
        cout << "bazi kantlilar ucar" << endl;
    }
};

class yarasa : public memeli, public kanatli {

public:
    yarasa() {
        cout << "yarasalar hem memeli hemde kanatlı olup ucarlar" << endl;
    }
};

int main() {
    yarasa y1;
    // y1.ucur();
    y1.memeli::ucur();
    y1.kanatli::ucur();

    return 0;
}
