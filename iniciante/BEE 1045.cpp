#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double in[3], n;

    for (int i = 0; i < 3; i++) {
        scanf("%lf", &n);
        in[i] = n;
    }

    sort(in, in + 3, greater<int>());

    double a = in[0], b = in[1], c = in[2];

    if (a >= b + c)
        printf("NAO FORMA TRIANGULO\n");
    else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2))
            printf("TRIANGULO RETANGULO\n");
        if (pow(a, 2) > pow(b, 2) + pow(c, 2))
            printf("TRIANGULO OBTUSANGULO\n");
        if (pow(a, 2) < pow(b, 2) + pow(c, 2))
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        if (a == b && a != c || a == c && a != b || b == c && b != a)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}