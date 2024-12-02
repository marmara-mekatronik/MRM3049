#include <iostream>
class Kare{
public:
    void setKenar(int k){
        kenar=k;
    }
private:
    int kenar;
};

int main() {
    Kare kare1;
    kare1.setKenar(30);
    return 0;
}
