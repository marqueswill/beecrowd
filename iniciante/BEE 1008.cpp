#include <cstdio>

using namespace std;

int main() {
    int n, h;
    double s;
    scanf("%d %d %lf", &n, &h, &s);
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", h * s);

    return 0;
}