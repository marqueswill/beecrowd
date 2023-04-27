#include <iostream>

using namespace std;

int main() {
    int n[10], v;
    cin >> v;

    for (int i = 0; i < 10; i++) {
        n[i] = v;
        v *= 2;
    }

    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}