#include <iostream>

using namespace std;

int main() {
    long long int n, i, v, prox, carneiros = 0, ataques = 0;
    cin >> n;
    long long int sitio[n], visitas[n];

    for (i = 0; i < n; i++) {
        cin >> v;
        sitio[i] = v;
        visitas[i] = 0;
    }

    i = 0;
    while (true) {
        if (sitio[i] % 2 == 0)
            if (i == 0) {
                visitas[i]++;
                if (sitio[i] > 0)
                    sitio[i]--;
                break;
            } else {
                visitas[i]++;
                if (sitio[i] > 0)
                    sitio[i]--;
                i--;
            }
        else {
            if (i == n - 1) {
                visitas[i]++;
                if (sitio[i] > 0)
                    sitio[i]--;
                break;
            } else {
                visitas[i]++;
                if (sitio[i] > 0)
                    sitio[i]--;
                i++;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (visitas[i] > 0)
            ataques++;
        carneiros += sitio[i];
    }
    cout << ataques << " " << carneiros << endl;

    return 0;
}