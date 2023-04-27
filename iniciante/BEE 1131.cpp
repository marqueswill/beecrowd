#include <iostream>

using namespace std;

int main() {
    int opt, cnt = 0, g = 0, i = 0, e = 0, x, y;

    while (true) {
        cin >> x >> y >> opt;

        if (x == y)
            e++;
        else if (x > y)
            i++;
        else
            g++;

        cnt++;

        printf("Novo grenal (1-sim 2-nao)\n");
        if (opt == 2)
            break;
    }

    printf("%d grenais\n", cnt);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", e);

    if (i == g)
        printf("Nao houve vencedor\n");
    else if (i > g)
        printf("Inter venceu mais\n");
    else
        printf("Gremio venceu mais\n");

    return 0;
}