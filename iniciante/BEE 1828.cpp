#include <iostream>

using namespace std;

int main() {
    int t, s, r, caso;
    string shelly, raj;
    string escolha[] = {"tesoura", "papel", "pedra", "lagarto", "Spock", "tesoura", "lagarto", "papel", "Spock", "pedra", "tesoura"};

    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> shelly >> raj;

        if (shelly == raj)
            caso = 3;
        else {
            for (int i = 0; i < 10; i++) {
                if (shelly == escolha[i] && raj == escolha[i + 1])
                    caso = 1;
                if (raj == escolha[i] && shelly == escolha[i + 1])
                    caso = 2;
            }
        }

        switch (caso) {
            case 1:
                printf("Caso #%d: Bazinga!\n", i);
                break;
            case 2:
                printf("Caso #%d: Raj trapaceou!\n", i);
                break;
            case 3:
                printf("Caso #%d: De novo!\n", i);
                break;

            default:
                break;
        }
    }

    return 0;
}