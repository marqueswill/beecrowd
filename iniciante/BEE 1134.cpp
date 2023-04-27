#include <iostream>

using namespace std;

int main() {
    int tipo, a = 0, g = 0, d = 0;
    do {
        cin >> tipo;

        switch (tipo) {
            case 1:
                a++;
                break;
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;
            default:
                break;
        }

    } while (tipo != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);

    return 0;
}