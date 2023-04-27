#include <iostream>

using namespace std;

int main() {
    double a, b, porcentagem;

    cin >> a >> b;
    porcentagem = (b - a) / a;
    printf("%.2lf%\n", porcentagem * 100.0);

    return 0;
}