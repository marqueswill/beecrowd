#include <iostream>

using namespace std;

int main() {
    int x, y, begin, end, sum;

    while (true) {
        cin >> x >> y;

        if (x <= 0 || y <= 0)
            break;

        if (x <= y) {
            begin = x;
            end = y;
        } else {
            begin = y;
            end = x;
        }

        sum = 0;
        for (int i = begin; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("Sum=%d\n", sum);
    }
    return 0;
}