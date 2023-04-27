#include <iostream>

using namespace std;

int main() {
    int x, z, sum = 0, cnt = 0;
    cin >> x;

    while (true) {
        cin >> z;

        if (z > x) {
            do {
                sum += x;
                x++;
                cnt++;
            } while (sum < z);
            break;
        }
    }

    cout << cnt << endl;
    return 0;
}