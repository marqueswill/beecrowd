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

    for (int i = begin; i <= end; i++) {
        if (i % 13 != 0)
            sum += i;
    }
    cout << sum << endl;

    return 0;
}