#include <iostream>

using namespace std;

int main() {
    int p, cod, q;
    double sum = 0, precos[] = {1.50, 2.50, 3.50, 4.50, 5.50};
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> cod >> q;
        sum += precos[cod - 1001] * q;
    }
    printf("%.2lf\n", sum);

    return 0;
}