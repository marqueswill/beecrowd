#include <iostream>

using namespace std;

int main() {
    int range, num;
    char tipo;
    int total = 0, c = 0, r = 0, s = 0;

    cin >> range;
    for (int i = 0; i < range; i++) {
        
        cin >> num >> tipo;
        total += num;

        if (tipo == 'C') {
            c += num;
        } else if (tipo == 'R') {
            r += num;
        } else if (tipo == 'S') {
            s += num;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %\n", (c * 100.00) / total);
    printf("Percentual de ratos: %.2lf %\n", (r * 100.00) / total);
    printf("Percentual de sapos: %.2lf %\n", (s * 100.00) / total);

    return 0;
}