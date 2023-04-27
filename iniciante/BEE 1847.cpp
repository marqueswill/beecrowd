#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (b < a && c >= b) {
        printf(":)\n");
    } else if (b > a && c <= b) {
        printf(":(\n");
    } else if (b > a && c > b) {
        if (c - b < b - a) {
            printf(":(\n");
        } else if (c - b >= b - a) {
            printf(":)\n");
        }
    } else if (b < a && c < b) {
        if (b - a < c - b) {
            printf(":)\n");
        } else if (b - a >= c - b) {
            printf(":(\n");
        }
    } else if (a == b) {
        if (c > b) {
            printf(":)\n");
        } else {
            printf(":(\n");
        }
    }

    return 0;
}