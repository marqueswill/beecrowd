#include <iostream>

using namespace std;

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int matriz[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j)
                    matriz[i][j] = 1;
                else
                    matriz[i][j] = 3;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j + i == n - 1)
                    matriz[i][j] = 2;
                cout << matriz[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}