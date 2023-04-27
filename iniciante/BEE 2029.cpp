#include <math.h>
#include <stdio.h>

int main() {
    float v, d, r, h, ab, at;

    while (scanf("%f %f", &v, &d) != EOF) {
        r = d / 2;
        ab = 3.14 * pow(d / 2, 2);
        h = v / ab;

        printf("ALTURA = %.2f\n", h);
        printf("AREA = %.2f\n", ab);
    }
    return 0;
}