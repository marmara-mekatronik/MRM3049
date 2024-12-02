#include <iostream>

using namespace std;
template <class T>
void KabarcikSiralamasi(T a[], int n){
    for (int i = 0; i < n; i++) {
        for (int j = n-1; i <j ; j--) {
            if (a[j]<a[j-1])
                swap(a[j],a[j-1]);
        }
    }
}



int main() {
    int a[5]={10,50,30,40,20};
    int n = sizeof (a) / sizeof (a[0]);

    KabarcikSiralamasi<int>(a,n);

    cout << "integer Sıralanmış Dizi :\n" ;
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t" << endl;
    }

    double b[5]={1.1,5.5,3.3,4.4,2.2};
    int m = sizeof (b) / sizeof (b[0]);

    KabarcikSiralamasi<double>(b,n);

    cout << "double Sıralanmış Dizi :\n" ;
    for (int i = 0; i < n; i++) {
        cout << b[i] << "\t" << endl;
    }

    return 0;
}
