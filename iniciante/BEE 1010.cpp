#include <iostream>

using namespace std;

int main() {
    int cod, n;
    double val, total = 0;
    scanf("%d %d %lf", &cod, &n, &val);
    total+=n*val;
    scanf("%d %d %lf", &cod, &n, &val);
    total+=n*val;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}