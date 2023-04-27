#include <iostream>

using namespace std;

int main() {
    int anos, tempo, pa, pb;
    double g1, g2;
    cin >> tempo;
    for (int i = 0; i < tempo; i++) {
        cin >> pa >> pb >> g1 >> g2;

        anos = 0;
        while (true) {
            if (pa > pb)
                break;
            if (anos > 100)
                break;

            anos++;
            pa += pa * (g1 / 100);
            pb += pb * (g2 / 100);
        }

        if (anos <= 100)
            printf("%d anos.\n", anos);
        else
            printf("Mais de 1 seculo.\n");
    }

    return 0;
}