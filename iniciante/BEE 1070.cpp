#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0)
        n += 1;

    for (int i = 0; i < 6; i++) {
        cout << n << endl;
        n += 2;
    }

    return 0;
}