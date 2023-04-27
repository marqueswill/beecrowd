#include <iostream>

using namespace std;

int main() {
    int n, m;
    string acao;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> acao;
        if (acao == "clicou")
            n--;
        else
            n++;
    }
    cout << n << endl;
    return 0;
}