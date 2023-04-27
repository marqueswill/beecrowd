#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (abs(b - c) < a && a < b + c && abs(b - a) < c && c < b + a && abs(c - a) < b && b < c + a) {
        printf("Perimetro = %.1lf\n", a + b + c);
    } else {
        printf("Area = %.1lf\n", ((a + b) * c) / 2);
    }

    return 0;
}