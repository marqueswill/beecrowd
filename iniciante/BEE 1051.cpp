#include <iostream>

using namespace std;

int main() {
    double salario, imposto;
    cin >> salario;
    imposto = 0;

    if (salario > 4500) {
        imposto = (salario - 4500) * 0.28;
        salario -= (salario - 4500);
    }

    if (salario > 3000) {
        imposto += (salario - 3000) * 0.18;
        salario -= (salario - 3000);
    }

    if (salario > 2000) {
        imposto += (salario - 2000) * 0.08;
        salario -= (salario - 2000);
    }

    if (imposto == 0)
        printf("Isento\n");
    else
        printf("R$ %.2lf\n", imposto);

    return 0;
}