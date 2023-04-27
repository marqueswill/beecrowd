#include <iostream>

using namespace std;

int main() {
    double n, sum = 0;
    int t = 0;
    for (int i = 0; i < 6; i++) {
        cin >> n;
        if (n > 0) {
            sum += n;
            t++;
        }
    }
    printf("%d valores positivos\n%.1lf\n", t, sum / t);

    return 0;
}