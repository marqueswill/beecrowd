#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double entrada;
    scanf("%lf", &entrada);

    int valor = (int)entrada, valor_moedas, troco; //valor recebe a parte inteira da entrada
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    entrada = (entrada - valor) * 100; //tranforma a parte decimal na parte inteira
    valor_moedas = (int)entrada; //converte para inteiro

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        troco = valor % cedulas[i];
        valor -= troco;

        printf("%d nota(s) de R$ %d.00\n", valor / cedulas[i], cedulas[i]);

        valor = troco;
    }

    valor *= 100;
    valor += valor_moedas;
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        troco = valor % moedas[i];
        valor -= troco;

        printf("%d moeda(s) de R$ %.2lf\n", valor / moedas[i], moedas[i] / 100.00);

        valor = troco;
    }

    return 0;
}