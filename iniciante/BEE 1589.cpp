#include <iostream>

using namespace std;

int main() {
    int t, r1, r2;
    cin >> t;
    for (t; t > 0; t--) {
        cin >> r1 >> r2;
        cout << r1 + r2 << endl;
    }

    return 0;
}