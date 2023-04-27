#include <iostream>

using namespace std;

int main() {
    string entrada, snum;
    int h, m, atraso;
    while (getline(cin, entrada)) {

        snum = entrada[0];
        h = stoi(snum);
        snum = "";
        snum = snum + entrada[2] + entrada[3];
        m = stoi(snum);

        m += h * 60;

        atraso = (m + 60) - 8 * 60;
        if (atraso < 0)
            atraso = 0;

        printf("Atraso maximo: %d\n", atraso);
    }

    return 0;
}