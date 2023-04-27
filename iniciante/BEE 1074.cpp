#include <iostream>

using namespace std;

int main() {
    int n, limit;

    cin >> limit;

    for (int i = 0; i < limit; i++) {
        cin >> n;

        if (n == 0)
            printf("NULL\n");
        else {
            if (n % 2 == 0)
                printf("EVEN ");
            else
                printf("ODD ");

            if (n > 0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
    }

    return 0;
}