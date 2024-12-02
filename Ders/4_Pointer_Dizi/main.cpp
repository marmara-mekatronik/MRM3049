#include <iostream>

using namespace std;
const int MAX =  3;

int main() {
int dizi[MAX] = {10,100,1000};
int *ptr_dizi;

ptr_dizi = dizi; //ptr_dizi = &dizi[0];

    for (int i = 0; i < MAX; ++i) {
        cout << "Dizi Pointer Adresi [ " << i << " ] = ";
        cout << ptr_dizi << endl;

        cout << "Dizi Degeri [ " << i << " ] = ";
        cout << *ptr_dizi << endl;

        ptr_dizi++;
    }
    return 0;
}
