#include <iostream>

using namespace std;

int main() {
    int n, h, d, g;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h >> d >> g;
        if ((h >= 200 && h <= 300) && (d >= 50) && (g >= 150))
            printf("Sim\n");
        else
            printf("Nao\n");
    }

    return 0;
}