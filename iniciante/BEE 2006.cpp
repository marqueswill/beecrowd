#include <iostream>

using namespace std;

int main() {
    int t, n, w = 0;
    cin >> t;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (n == t)
            w++;
    }
    cout << w << endl;

    return 0;
}