#include <iostream>

using namespace std;

int main() {
    int inicio, fim, total;
    scanf("%d %d", &inicio, &fim);

    if (fim > inicio)
        total = fim - inicio;
    else if (fim <= inicio) {
        total = 24 - inicio + fim;
    }
    printf("O JOGO DUROU %d HORA(S)\n", total);
    return 0;
}