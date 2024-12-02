#include <iostream>

using namespace std;
class sayi{
public:
    int deger;
    sayi(){}
    sayi(int s1){
        deger = s1;
    }
// toplama operatörüne aşırı yükleme
    sayi operator+(sayi s2) {
       sayi toplam;
       toplam.deger = deger + s2.deger;
       //deger, sayi1 ile aldığımız değer olur
       // yani metod sayi1 değerini doğrudan
       //sayi2 değerini ise parametre olarak alır.
        return (toplam);
    }
};

int main() {
    sayi sayi1(10);
    sayi sayi2(33);
    sayi sayi3;

    int sayi4;

    sayi3 = sayi1 + sayi2;
    sayi4 = 25 + 85;

    cout << "\nSayi 1 degeri : " << sayi1.deger << endl;
    cout << "\nSayi 2 degeri : " << sayi2.deger << endl;
    cout << "\nSayi 3 degeri : " << sayi3.deger << endl;
    cout << "\nSayi 4 degeri : " << sayi4 << endl;

    return 0;
}
