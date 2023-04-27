#include <iostream>

using namespace std;

int main() {
    int cod, num;
    double total;
    scanf("%d %d", &cod, &num);
    switch (cod) {
        case 1:
            total = num * 4;
            break;
        case 2:
            total = num * 4.5;

            break;
        case 3:
            total = num * 5;

            break;
        case 4:
            total = num * 2;

            break;
        case 5:
            total = num * 1.5;

            break;
        default:
            break;
    }

    printf("Total: R$ %.2lf\n",total);

    return 0;
}