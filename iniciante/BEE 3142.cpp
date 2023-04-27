#include <iostream>
#include <string>

using namespace std;

int main() {
    string cod;

    while (getline(cin, cod)) {
        long int num = 0;
        int a = (int)cod[0] - 64, b = (int)cod[1] - 64, c = (int)cod[2] - 64;

        if (cod.size() > 3) {
            printf("Essa coluna nao existe Tobias!\n");
        } else {
            if (cod.size() == 1)
                num += a;

            if (cod.size() == 2)
                num += a * 26 + b;

            if (cod.size() == 3)
                num += a * 26 * 26 + b * 26 + c;

            if (num > 24 * 26 * 26 + 6 * 26 + 4)
                printf("Essa coluna nao existe Tobias!\n");
            else
                printf("%ld\n", num);
        }
    }

    return 0;
}