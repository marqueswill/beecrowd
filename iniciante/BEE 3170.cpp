#include <iostream>

using namespace std;

int main() {
    int a, b, bolinhas;
    cin >> a >> b;

    bolinhas = b / 2 - a;
    if (bolinhas <= 0)
        printf("Amelia tem todas bolinhas!\n");
    else
        printf("Faltam %d bolinha(s)\n", bolinhas);

    return 0;
}