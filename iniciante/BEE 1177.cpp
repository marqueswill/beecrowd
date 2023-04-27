#include <iostream>

using namespace std;

int main() {
    int n[1000], t, j = 0;
    cin >> t;

    for (int i = 0; i < 1000; i++) {
        if (j == t)
            j = 0;
        n[i] = j;
        j++;
    }

    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
