#include <iostream>

using namespace std;

int main() {
    bool w = true;
    int pulo, c, in;
    cin >> pulo >> c;

    int canos[c];
    for (int i = 0; i < c; i++) {
        cin >> in;
        canos[i] = in;
    }

    for (int i = 0; i < c - 1; i++) {
        if (abs(canos[i] - canos[i + 1]) > pulo)
            w = false;
    }

    if (w == true)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");

    return 0;
}