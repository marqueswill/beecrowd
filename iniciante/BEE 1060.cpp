#include <iostream>

using namespace std;

int main() {
    double n;
    int t = 0;
    for (int i = 0; i < 6; i++) {
        cin >> n;
        if (n > 0)
            t++;
    }
    printf("%d valores positivos\n", t);

    return 0;
}