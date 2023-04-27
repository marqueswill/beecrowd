#include <iostream>

using namespace std;
int ehMaior(int a, int b);

int main() {
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = ehMaior(a, b);
    maior = ehMaior(maior, c);

    printf("%d eh o maior\n", maior);

    return 0;
}

int ehMaior(int a, int b) {
    int maior;
    maior = (a + b + abs(a - b)) / 2;
    return maior;
}