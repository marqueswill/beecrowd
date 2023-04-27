#include <iostream>

using namespace std;

int main() {
    int t, n, menor, pos;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;

        if (i == 0) {
            menor = t;
            pos = i + 1;
        } else if (t < menor) {
            menor = t;
            pos = i + 1;
        }
    }
    cout << pos << endl;
    return 0;
}