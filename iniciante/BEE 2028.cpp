#include <iostream>

using namespace std;

int main() {
    int n, elementos, caso = 0;
    while (scanf("%d", &n) != EOF) {
        caso++;
        elementos = 1;
        for (int i = 0; i <= n; i++) {
            elementos += i;
        }

        if (n == 0) {
            printf("Caso %d: %d numero\n", caso, elementos);
            printf("0\n\n");
        } else {
            printf("Caso %d: %d numeros\n", caso, elementos);
            printf("0");
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    printf(" %d", i);
                }
            }
            printf("\n\n");
        }
    }

    return 0;
}