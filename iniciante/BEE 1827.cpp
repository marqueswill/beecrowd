#include <iostream>

using namespace std;

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int matriz[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = 0;

                if (i == j)
                    matriz[i][j] = 2;
                if (j + i == n - 1)
                    matriz[i][j] = 3;

                if (i >= n / 3 && i <= n - n / 3 -1 && j >= n / 3 && j <= n - n / 3 -1)
                    matriz[i][j] = 1;

                if (i == j && i == n / 2)
                    matriz[i][j] = 4;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matriz[i][j];
            }
            cout << "\n";
        } cout << "\n";
    }

    return 0;
}