#include <iostream>

using namespace std;

int main() {
    double salario;
    int reajuste;
    scanf("%lf", &salario);

    if (salario >= 0 && salario <= 400)
        reajuste = 15;
    else if (salario > 400 && salario <= 800)
        reajuste = 12;
    else if (salario > 800 && salario <= 1200)
        reajuste = 10;
    else if (salario > 1200 && salario <= 2000)
        reajuste = 7;
    else
        reajuste = 4;

    printf("Novo salario: %.2lf\n", (salario * (1 + reajuste / 100.00)));
    printf("Reajuste ganho: %.2lf\n", (salario * (reajuste / 100.00)));
    printf("Em percentual: %d %\n", reajuste);

    return 0;
}