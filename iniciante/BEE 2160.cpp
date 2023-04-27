#include <iostream>
#include <string>

using namespace std;

int main() {
    string texto;
    getline(cin, texto);

    if (texto.size() <= 80)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}