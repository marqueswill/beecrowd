#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int valores[8];
    int total, inicio, fim;
    int d_i, h_i, m_i, s_i, d_f, h_f, m_f, s_f;
    string entrada, elementos, e;

    int n, j = 0;
    for (int i = 0; i < 4; i++) {
        getline(cin, entrada);
        stringstream elementos(entrada);

        while (elementos >> e) {
            try {
                n = stoi(e);
                valores[j] = n;
                j++;

            } catch (...) {
                continue;
            }
        }
    }

    d_i = valores[0];
    h_i = valores[1];
    m_i = valores[2];
    s_i = valores[3];
    d_f = valores[4];
    h_f = valores[5];
    m_f = valores[6];
    s_f = valores[7];

    inicio = h_i * 3600 + m_i * 60 + s_i;
    fim = ((d_f - d_i) * 24 + h_f) * 3600 + m_f * 60 + s_f;

    if (fim > inicio)
        total = fim - inicio;
    else if (fim <= inicio) {
        total = 24 * 60 - inicio + fim;
    }

    printf("%d dia(s)\n", total / (3600 * 24));
    total = total % (3600 * 24);
    printf("%d hora(s)\n", total / 3600);
    total = total % (3600);
    printf("%d minuto(s)\n", total / 60);
    total = total % (60);
    printf("%d segundo(s)\n", total);

    return 0;
}