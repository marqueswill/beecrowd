#include <iostream>

using namespace std;

int main() {
    int total, inicio, fim, h_i, m_i, h_f, m_f;
    scanf("%d %d %d %d", &h_i, &m_i, &h_f, &m_f);

    inicio = h_i * 60 + m_i;
    fim = h_f * 60 + m_f;

    if (fim > inicio)
        total = fim - inicio;
    else if (fim <= inicio) {
        total = 24 * 60 - inicio + fim;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total / 60, total % 60);
    return 0;
}