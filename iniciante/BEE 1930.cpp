#include <iostream>

using namespace std;

int main() {
    int n, sum = -3;

    for (int i = 0; i < 4; i++) {
        cin >> n;
        sum += n;
    }
    cout << sum << endl;

    return 0;
}