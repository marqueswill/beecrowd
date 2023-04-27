#include <iomanip>
#include <iostream>

using namespace std;
int main() {
    int i, n;
    cin >> n;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, n * i);
    }

    return 0;
}