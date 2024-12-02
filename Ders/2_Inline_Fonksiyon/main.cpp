#include <iostream>

using namespace std;

#define MAX(A, B) ((A)>(B) ? (A) : (B))

inline int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {

    int i, x, y;
    x = 30;
    y = 40;
    i = MAX(x++, y++);
    cout << "x = " << x << " y = " << y << "\n";

    x = 10;
    y = 20;
    i = max(x++, y++);
    cout << "x = " << x << " y = " << y << "\n";

    return 0;
}
