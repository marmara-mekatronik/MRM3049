#include <iostream>

using namespace std;

template <typename T>

const T& maksimum(const T& x, const T& y){
    return (x>y) ? x : y;
}

int main() {

    int i = maksimum(25,36);
    cout << i << endl;

    double d = maksimum(25.25,36.36);
    cout << d << endl;

    char ch = maksimum('a','6');
    cout << ch << endl;

    return 0;
}
