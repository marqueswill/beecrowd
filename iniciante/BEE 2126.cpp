#include <iostream>
#include <string>

using namespace std;

int main() {
    int range, pos, qtd, caso = 0;
    string n1, n2;
    bool sub;
    while (getline(cin, n1) && getline(cin, n2)) {
        caso++;
        qtd = 0;
        range = n2.size() - n1.size();
        for (int i = 0; i <= range; i++) {
            sub = true;

            for (int j = 0; j < n1.size(); j++) {
                if (n1[j] != n2[i + j])
                    sub = false;
            }

            if (sub) {
                qtd++;
                pos = i + 1;
            }
        }
        printf("Caso #%d:\n", caso);
        if (qtd > 0) {
            printf("Qtd.Subsequencias: %d\n", qtd);
            printf("Pos: %d\n\n", pos);
        } else {
            printf("Nao existe subsequencia\n\n");
        }
    }

    return 0;
}