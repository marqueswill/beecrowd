#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    string nome;
    double sal, vendas, total;
    cin >> nome;
    scanf("%lf %lf", &sal, &vendas);
    total = sal + vendas * 0.15;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}