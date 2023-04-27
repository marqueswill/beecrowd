#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int in, val[3], sorted_val[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &in);
        val[i] = sorted_val[i] = in;
    }

    sort(sorted_val, sorted_val + 3);

    for (int i = 0; i < 3; i++) {
        printf("%d\n", sorted_val[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", val[i]);
    }

    return 0;
}