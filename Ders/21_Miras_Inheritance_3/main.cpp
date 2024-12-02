#include <iostream>

using namespace std;

class SinifA{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class SinifB: public SinifA{
public:
SinifB(){
    x=50;
}
    // x public
    // y protected
    // z erişilemez SinifB tarafından
};
class SinifC:protected SinifA{
public:
    SinifC(){
    x=50;
}
// x protected
// y protected
// z erişilemez SinifC tarafından
};
class SinifD: private SinifA{
public:
    SinifD(){
        x=50;
    }
    // x private
    // y private
    // z erişilemez SinifD tarafından
};


int main() {
SinifA a;
SinifB b;
SinifC c;
SinifD d;
    return 0;
}
