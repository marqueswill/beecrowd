#include <iostream>

using namespace std;

int main() {
    int n, x, y, cnt, sum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (x % 2 == 0)
            x++;

        cnt = sum = 0;
        while (cnt < y) {
            sum += x;
            x += 2;
            cnt++;
        }
        cout << sum << endl;
    }

    return 0;
}