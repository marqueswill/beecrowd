#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double a, b, c, r1, r2, delta;
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;
    if (delta < 0 || a == 0) {
        printf("Impossivel calcular\n");
    } else {
        delta = sqrt(delta);
        r1 = (-b + delta) / (2 * a);
        r2 = (-b - delta) / (2 * a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }

    return 0;
}