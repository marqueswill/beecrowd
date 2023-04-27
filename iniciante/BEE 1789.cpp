#include <iostream>

using namespace std;

int main() {
    int l, v, maior;
    while (scanf("%d", &l) != EOF) {
        for (int i = 0; i < l; i++) {
            cin >> v;

            if (i == 0)
                maior = v;
            else if (v > maior)
                maior = v;
        }

        if (maior < 10)
            cout << 1 << endl;
        else if (maior < 20)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}