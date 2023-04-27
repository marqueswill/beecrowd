#include <iostream>

using namespace std;

int main() {
    int n, matricula, selecionado;
    double maior, nota;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> matricula >> nota;
        if (i == 0) {
            maior = nota;
            selecionado = matricula;
        } else {
            if (nota > maior) {
                maior = nota;
                selecionado = matricula;
            }
        }
    }

    if (maior < 8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", selecionado);

    return 0;
}