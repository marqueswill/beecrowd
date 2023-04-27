#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double s = 0, i, j;
    for (i = 1, j = 0; i <= 39; i += 2, j += 1) {
        s += i / pow(2, j);
    }

    printf("%.2lf\n", s);

    return 0;
}