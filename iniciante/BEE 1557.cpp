#include <stdio.h>

#include <cmath>
#include <iostream>

using namespace std;
int NumberOfDigits(int num);

int main() {
    int n;

    while (n != 0) {
        scanf("%d", &n);

        int matriz[n][n];
        int t, digits;

        t = pow(2, n - 1 + n - 1);
        digits = NumberOfDigits(t);
        // printf("%d, %d\n\n", t, digits);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = pow(2, i + j);

                for (int k = 0; k < digits - NumberOfDigits(matriz[i][j]); k++) {  // adiciona espaçamento/alinha à direita
                    printf(" ");
                }
                if (j != n - 1)
                    printf("%d ", matriz[i][j]);
                else
                    printf("%d", matriz[i][j]);
            }
            printf("\n");  // quebra para a proxima linha da matriz
        }

        if (n != 0)
            printf("\n");
    }

    return 0;
}

int NumberOfDigits(int num) {
    int res, casas, digits = 1;

    while (true) {
        if (num < pow(10, digits))
            return digits;
        else
            digits++;
    }

    return digits;
}