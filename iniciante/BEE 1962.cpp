#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t;

        if (t < 2015)
            printf("%d D.C.\n", 2015 - t);
        else
            printf("%d A.C.\n", abs(2015 - t - 1));
    }

    return 0;
}