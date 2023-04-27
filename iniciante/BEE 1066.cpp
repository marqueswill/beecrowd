#include <iostream>

using namespace std;

int main() {
    int n, par = 0, imp = 0, pos = 0, neg = 0;

    for (int i = 0; i < 5; i++) {
        cin >> n;

        if (n > 0)
            pos++;
        if (n < 0)
            neg++;

        if (n % 2 == 0)
            par++;
        else
            imp++;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}