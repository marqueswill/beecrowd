#include <iostream>

using namespace std;

int main() {
    int a, n, begin, end, sum = 0;

    cin >> a;

    while (true) {
        cin >> n;
        if (n > 0)
            break;
    }

    for (int i = 0; i <= n - 1; i++) {
        sum += (a + i);
    }
    cout << sum << endl;
    return 0;
}