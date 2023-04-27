#include <cstdio>

using namespace std;

int main() {
    double a, b, x;
    scanf("%lf %lf", &a, &b);
    x = (a * 3.5 + b * 7.5) / 11;
    printf("MEDIA = %.5lf\n", x);

    return 0;
}