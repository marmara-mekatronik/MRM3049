#include <iostream>

using namespace std;
class Ekle{
public:
    Ekle(int i=0){
        toplam = i;
    }
    void EkleSayi(int sayi){
        toplam+=sayi;
    }
    int getSayi(){
        return toplam;
    };

private:
    int toplam;

};
int main() {
    Ekle a;
    a.EkleSayi(10);
    a.EkleSayi(20);
    a.EkleSayi(30);

    std::cout << "Toplam girilen sayı: " << a.getSayi() << std::endl;
    return 0;
}
