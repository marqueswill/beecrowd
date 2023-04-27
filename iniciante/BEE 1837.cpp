#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a, b, r, q;

    cin >> a >> b;
    for (int i = 0; i < abs(b); i++) {
        r = i;
        q = (a - r) / b;
        if (a == b * q + r)
            break;
    }
    printf("%d %d\n", q, r);

    return 0;
}