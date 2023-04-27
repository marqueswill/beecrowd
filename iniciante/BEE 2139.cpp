#include <iostream>

using namespace std;

int main() {
    int natal, total, mes, dias;
    int meses[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (scanf("%d %d", &mes, &dias) != EOF) {
        natal = 360;  // 366-6

        total = dias;

        for (int i = 1; i < mes; i++)
            total += meses[i];

        if (total == natal)
            printf("E natal!\n");
        else if (natal - total == 1)
            printf("E vespera de natal!\n");
        else if (natal - total < 0)
            printf("Ja passou!\n");
        else
            printf("Faltam %d dias para o natal!\n", natal - total);
    }

    return 0;
}