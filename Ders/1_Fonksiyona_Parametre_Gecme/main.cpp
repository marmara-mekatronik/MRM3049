
#include <iostream>

using namespace std;

void show(int = 5, float = 2.3, long = 4);

int main() {
    show();
    show(5);
    show(6, 7.8);
    show(9, 10.11, 12L);
    return 0;
}

void show(int first, float second, long third) {
    cout << "\nfirst = " << first;
    cout << ", second = " << second;
    cout << ", third = " << third;
}