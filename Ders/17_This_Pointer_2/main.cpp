#include <iostream>

using namespace std;

class Test {
private:
    int x;
public:
    void setX(int x) {
        this->x = x;
    }

    void yaz() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Test nesne;
    int x = 20;
    nesne.setX(x);
    nesne.yaz();
    return 0;
}
