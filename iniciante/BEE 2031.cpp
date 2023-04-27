#include <iostream>

using namespace std;

int main() {
    string a, b;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a == b) {
            if (a == "ataque")
                printf("Aniquilacao mutua\n");
            if (a == "pedra")
                printf("Sem ganhador\n");
            if (a == "papel")
                printf("Ambos venceram\n");
        } else if ((a == "ataque" && (b == "pedra" || b == "papel")) || (a == "pedra" && b == "papel")) {
            printf("Jogador 1 venceu\n");
        } else {
            printf("Jogador 2 venceu\n");
        }
    }

    return 0;
}