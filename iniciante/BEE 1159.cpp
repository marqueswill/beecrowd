#include <iostream>

using namespace std;

int main() {
    int x, sum;
    while (true) {
        cin >> x;

        if (x == 0)
            break;

        if (x % 2 != 0)
            x++;

        sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += x;
            x += 2;
        }
        cout << sum << endl;
    }

    return 0;
}