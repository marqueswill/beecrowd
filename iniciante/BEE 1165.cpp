#include <iostream>

using namespace std;

int main() {
    int n, x, d;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        d = 0;
        for (int i = 1; i <= x; i++) {
            if (x % i == 0)
                d++;
        }

        if (d == 2)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }
    return 0;
}