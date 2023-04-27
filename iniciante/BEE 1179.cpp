#include <iostream>

using namespace std;

int main() {
    int n, par[5], impar[5], p = 0, i = 0;

    for (int range = 0; range < 15; range++) {
        cin >> n;

        if (n % 2 == 0) {
            if (p < 5) {
                par[p] = n;
                p++;
                if (p == 5) {
                    for (int j = 0; j < 5; j++) {
                        printf("par[%d] = %d\n", j, par[j]);
                    }
                    p = 0;
                }
            }
        } else {
            if (i < 5) {
                impar[i] = n;
                i++;

                if (i == 5) {
                    for (int j = 0; j < 5; j++) {
                        printf("impar[%d] = %d\n", j, impar[j]);
                    }
                    i = 0;
                }
            }
        }
    }

    if (i > 0) {
        for (int j = 0; j < i; j++) {
            printf("impar[%d] = %d\n", j, impar[j]);
        }
    }

    if (p > 0) {
        for (int j = 0; j < p; j++) {
            printf("par[%d] = %d\n", j, par[j]);
        }
    }
    
    return 0;
}
