#include <iostream>

using namespace std;

class memeli {
public:
    void ucur() {
        cout << " bazi memeliler ucar" << endl;
    }
};

class yarasa : public memeli{

public:
    void ucur() {
        cout << "yarasalar hem memeli hemde kanatlı olup ucarlar" << endl;
    }
};

int main() {
    yarasa y1;
    y1.ucur();
    y1.memeli::ucur();
    return 0;
}
