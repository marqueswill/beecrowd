#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (n; n > 0; n--) {
        if (n > 1) {
            printf("Ho ");
        } else {
            printf("Ho!\n");
        }
    }

    return 0;
}