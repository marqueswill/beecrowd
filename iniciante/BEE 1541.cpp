#include <cmath>
#include <iostream>

using namespace std;

int main() {
    while (true) {
        int a, b, c;
        int tam, lote;

        cin >> a;
        if (a == 0)
            break;
        cin >> b >> c;

        tam = (a * b) * (100.0 / c);

        lote = sqrt(tam);

        cout << lote << endl;
    }

    return 0;
}