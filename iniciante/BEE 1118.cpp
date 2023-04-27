#include <iostream>

using namespace std;

int main() {
    int cnt, opt;
    double nota, sum;

begin:
    cnt = sum = 0;
    while (cnt < 2) {
        cin >> nota;
        if (nota >= 0 && nota <= 10) {
            cnt++;
            sum += nota;
        } else {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n", sum / 2);

    while (true) {
        printf("novo calculo (1-sim 2-nao)\n");
        cin >> opt;
        if (opt == 1)
            goto begin;
        else if (opt == 2)
            break;
        else
            continue;
    }

    return 0;
}