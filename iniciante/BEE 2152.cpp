#include <iostream>

using namespace std;

int main() {
    int h, m, o, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h >> m >> o;
        printf("%02d:%02d - ",h,m);
        if (o)
            printf("A porta abriu!\n");
        else
            printf("A porta fechou!\n");
    }

    return 0;
}