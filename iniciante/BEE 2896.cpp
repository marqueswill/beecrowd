#include <stdio.h>

using namespace std;

int main() {
    int m, filho[3], velho;
    scanf("%d", &m);
    scanf("%d %d", &filho[0], &filho[1]);

    filho[2] = m - filho[0] - filho[1];

    for (int i = 0; i < 3; i++) {
        if (i==0)
            velho = filho[i];
        else if (filho[i] > velho)
            velho = filho[i];
    }

    printf("%d\n", velho);
    

    return 0;
}