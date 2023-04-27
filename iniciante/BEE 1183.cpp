#include <iostream>

using namespace std;

int main() {
    char o;
    int cnt = 0;
    double matriz[12][12], in, sum = 0;

    cin >> o;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> in;
            matriz[i][j] = in;
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (j > i) {
                sum += matriz[i][j];
                cnt++;
            }
        }
    }

    if (o == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum / cnt);

    return 0;
}