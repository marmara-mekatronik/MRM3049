#include <iostream>

using namespace std;

class Demo {
private:
    int sayi;
    char karekter;
public:
    Demo &setSayi(int sayi) {
        this->sayi = sayi;
        return *this;
    }

    Demo &setKarekter(char karekter) {
        this->karekter = karekter;
        return *this;
    }

    void yaz() {
        cout << sayi << endl;
        cout << karekter << endl;
    }
};

int main() {
    Demo nesne;
    nesne.setSayi(200).setKarekter('M');
    nesne.yaz();
    return 0;
}
