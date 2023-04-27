#include <iostream>

using namespace std;

int main() {
    int qt, n1, n2;
    string pessoa1, escolha1, pessoa2, escolha2;

    cin >> qt;
    for (int i = 0; i < qt; i++) {
        cin >> pessoa1 >> escolha1 >> pessoa2 >> escolha2;
        cin >> n1 >> n2;

        if ((n1 + n2) % 2 == 0) {
            if (escolha1 == "PAR")
                cout << pessoa1 << endl;
            else
                cout << pessoa2 << endl;
        } else {
            if (escolha1 == "PAR")
                cout << pessoa2 << endl;
            else
                cout << pessoa1 << endl;
        }
    }

    return 0;
}