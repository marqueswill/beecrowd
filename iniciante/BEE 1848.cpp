#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int gritos = 0, sum = 0;
    string entrada;

    while (gritos < 3) {
        getline(cin, entrada);

        if (entrada == "caw caw") {
            printf("%d\n", sum);
            sum = 0;
            gritos++;
        } else {
            for (int i = 0; i < 3; i++) {
                if (entrada[i] == '*')
                    sum += pow(2, 2 - i);
            }
        }
    }

    return 0;
}