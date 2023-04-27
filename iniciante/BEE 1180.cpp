#include <iostream>

using namespace std;

int main() {
    int n, menor, pos;
    cin >> n;
    int x[n], v;

    for (int i = 0; i < n; i++) {
        cin >> v;
        if (i == 0) {
            menor = v;
            pos = i;
        }

        if (v < menor) {
            menor = v;
            pos = i;
        }
    }

    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",pos);

    return 0;
}