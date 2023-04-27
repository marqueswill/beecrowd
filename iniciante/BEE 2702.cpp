#include <stdio.h>

int main() {
    int a, b, c, e, f, g, sum = 0;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &e, &f, &g);

    if (e > a)
        sum += e - a;
    if (f > b)
        sum += f - b;
    if (g > c)
        sum += g - c;

    printf("%d\n", sum);

    return 0;
}