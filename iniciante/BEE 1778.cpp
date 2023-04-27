#include <iostream>

using namespace std;

int main() {
    int n, d = 0, meio;
    while (true) {
        cin >> n;

        if (n == 0) {
            break;
        }

        int matriz[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0)
                    matriz[i][j] = j + 1;
                else if (j <= i)
                    matriz[i][j] = i - j + 1;
                else
                    matriz[i][j] = matriz[i - 1][j - 1];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == n - 1)
                    printf("%3d", matriz[i][j]);
                else
                    printf("%3d ", matriz[i][j]);
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
