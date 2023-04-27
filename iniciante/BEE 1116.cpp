#include <iostream>

using namespace std;

int main() {
    int range, x, y;
    cin >> range;
    for (int i = 0; i < range; i++) {
        cin >> x >> y;

        if (y != 0)
            printf("%.1f\n", (double)x / y);
        else
            printf("divisao impossivel\n");
    }

    return 0;
}