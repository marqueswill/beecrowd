#include <iostream>

using namespace std;

int main() {
    int x, y, begin, end, sum = 0;
    cin >> x >> y;

    if (x <= y) {
        begin = x;
        end = y;
    } else {
        begin = y;
        end = x;
    }
    for (int i = begin + 1; i < end; i++) {
        if (abs(i) % 2 == 1) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}