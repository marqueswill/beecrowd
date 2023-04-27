#include <iostream>

using namespace std;

int main() {
    int entrada;

    while (true) {
        cin >> entrada;
        if (entrada == 2002) {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}