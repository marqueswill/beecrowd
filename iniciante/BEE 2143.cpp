#include <iostream>

using namespace std;

int main() {
    int n, m;
    while (true) {
        cin >> n;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++) {
            cin >> m;
            if (m % 2 == 0)
                cout << m * 2 - 2 << endl;
            else
                cout << m * 2 - 1 << endl;
        }
    }

    return 0;
}