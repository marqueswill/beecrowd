#include <iostream>

using namespace std;

int main() {
    int p, j1, j2, r, a;
    int w;
    cin >> p >> j1 >> j2 >> r >> a;

    if (r == 1 && a == 1)
        w = 2;
    else if (r == 1 && a == 0)
        w = 1;
    else if (r == 0 && a == 1)
        w = 1;
    else if (r == 0 && a == 0) {
        if (p == 1) {
            if ((j1 + j2) % 2 == 0)
                w = 1;
            else
                w = 2;
        } else {
            if ((j1 + j2) % 2 == 1)
                w = 1;
            else
                w = 2;
        }
    }

    printf("Jogador %d ganha!\n", w);

    return 0;
}