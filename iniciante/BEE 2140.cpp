#include <iostream>

using namespace std;

int main() {
    int notas[] = {100, 50, 20, 10, 5, 2};
    int compra, pago, troco;
    bool possivel;

    while (true) {
        cin >> compra >> pago;
        if (compra == 0 && pago == 0)
            break;

        troco = pago - compra;
        possivel = false;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (notas[i] + notas[j] == troco)
                    possivel = true;
            }
        }

        if (possivel)
            printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}