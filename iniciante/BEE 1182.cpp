#include <iostream>

using namespace std;

int main() {
    int c;
    char t;
    double matriz[12][12], in, sum = 0;

    cin >> c;
    cin >> t;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> in;
            matriz[i][j] = in;
        }
    }

    for (int i = 0; i < 12; i++) {
        sum += matriz[i][c];
    }

    if (t == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum / 12);

    return 0;
}