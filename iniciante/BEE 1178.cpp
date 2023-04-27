#include <iostream>

using namespace std;

int main() {
    double n[100], x;

    cin >> x;
    for (int i = 0; i < 100; i++) {
        n[i] = x;
        x /= 2;
    }

    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}