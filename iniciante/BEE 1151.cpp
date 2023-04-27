#include <iomanip>
#include <iostream>

using namespace std;
int main() {
    int a0 = 0, a1 = 0, a2 = 0, n, cnt = 0;
    cin >> n;

    while (cnt++ < n) {
        if (cnt == 1) {
            a1 = 1;
            a2 = 1;
        } else {
            a2 = a0 + a1;
        }

        if (cnt != n)
            printf("%d ", a0);
        else
            printf("%d\n", a0);

        a0 = a1;
        a1 = a2;
    }

    return 0;
}