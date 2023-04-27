#include <iostream>

using namespace std;

int main() {
    double x, y;

    while (true) {
        scanf("%lf %lf", &x, &y);

        if (x == 0 || y == 0) {
            break;
        } else {
            if (x > 0) {
                if (y > 0)
                    printf("primeiro\n");
                else
                    printf("quarto\n");
            } else {
                if (y > 0)
                    printf("segundo\n");
                else
                    printf("terceiro\n");
            }
        }
    }
    return 0;
}