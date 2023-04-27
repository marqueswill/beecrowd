#include <iostream>

using namespace std;

int main() {
    int x, y;

    while (true) {
        cin >> x >> y;

        if (x == y)
            break;
        else if (x < y)
            printf("Crescente\n");
        else
            printf("Decrescente\n");
    }
    return 0;
}