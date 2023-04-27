#include <iostream>

using namespace std;

int main() {
    int sum = 0, n;
    string palavra;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> palavra;
        sum = 0;
        for (int j = 0; j < palavra.size(); j++) {
            sum++;
        }
        printf("%.2lf\n", sum / 100.0);
    }

    return 0;
}