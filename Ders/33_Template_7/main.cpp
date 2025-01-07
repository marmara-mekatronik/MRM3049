#include <iostream>
#include <cstring>

using namespace std; // std isim alanını kullan

template <typename T>
bool karsilastir(T a, T b) {
    cout << "Genel karsilastir kullaniliyor\n";
    return a == b;
}

template <>
bool karsilastir<const char*>(const char* a, const char* b) {
    cout << "const char* karsilastirmasi kullaniliyor\n";
    return strcmp(a, b) == 0;
}

int main() {
    int x = 5, y = 10;
    cout << karsilastir(x, y) << endl;

    double pi = 3.14, e = 2.71;
    cout << karsilastir(pi, e) << endl;

    const char* str1 = "elma";
    const char* str2 = "armut";
    cout << karsilastir(str1, str2) << endl;

    const char* str3 = "elma";
    const char* str4 = "elma";
    cout << karsilastir(str3, str4) << endl;

    return 0;
}
