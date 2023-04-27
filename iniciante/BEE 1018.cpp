#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int valor, troco, i = 0;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &valor);
    printf("%d\n", valor);

    for (i = 0; i < 7; i++) {
        troco = valor % cedulas[i];
        valor -= troco;

        printf("%d nota(s) de R$ %d,00\n", valor / cedulas[i], cedulas[i]);

        valor = troco;
    }

    return 0;
}