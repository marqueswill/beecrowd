#include <iostream>

using namespace std;

int main() {
    int n, t = 0;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (n % 2 == 0) {
            t++;
        }
    }
    printf("%d valores pares\n", t);

    return 0;
}