#include <stdio.h>

using namespace std;

int main() {
    int n, e, in = 0, out = 0;
    scanf("%d", &e);
    for (int i = 0; i < e; i++) {
        scanf("%d", &n);
        if (n >= 10 && n <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
        
    return 0;
}