#include <stdio.h>

int main() {
    float a, b, litros;
    scanf("%f", &a);
    scanf("%f", &b);

    litros = (a * b) / 12;
    printf("%.3f\n", litros);

    return 0;
}