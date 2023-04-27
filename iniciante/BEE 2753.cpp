#include <stdio.h>

using namespace std;

int main() {
    int n = 97;

    for (int i = 0; i < 26; i++) {
        printf("%d e %c\n", n + i, n + i);
    }

    return 0;   
}