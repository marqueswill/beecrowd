#include <iostream>

using namespace std;

int SumImpOnRange(int x, int y);

int main() {
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n ; i++) {
        cin >> x >> y;
        cout << SumImpOnRange(x,y) << endl;
    }

    return 0;
}

int SumImpOnRange(int x, int y) {
    int begin, end, sum = 0;

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

    return sum;
}