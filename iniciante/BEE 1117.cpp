#include <iostream>

using namespace std;

int main() {
    int cnt = 0;
    double nota, sum;

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

    return 0;
}