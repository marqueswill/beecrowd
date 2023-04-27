#include <iostream>

using namespace std;

int main() {
    int n[20], v;

    for (int i = 0; i < 20; i++) {
        cin >> v;
        n[i] = v;
    }

    int temp;
    for (int i = 0; i < 10; i++) {
        temp = n[19 - i];

        n[19 - i] = n[i];
        n[i] = temp;
    }

    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}