#include <stdio.h>

using namespace std;

int main() {
    int e, p;
    float n, sum;

    scanf("%d", &e);

    for (int i = 0; i < e; i++) {
        p = 2;
        sum = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%f", &n);
            p += j;
            sum += n * p;
        }
        printf("%.1f\n", sum / (2 + 3 + 5));
    }

    return 0;
}