#include <stdio.h>

using namespace std;

int main() {
    int e, n, m2, m3, m4, m5;
    m2 = m3 = m4 = m5 = 0;

    scanf("%d", &e);

    for (int i = 0; i < e; i++) {
        scanf("%d", &n);

        if (n % 2 == 0)
            m2++;
        if (n % 3 == 0)
            m3++;
        if (n % 4 == 0)
            m4++;
        if (n % 5 == 0)
            m5++;
    }

    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);

    return 0;
}