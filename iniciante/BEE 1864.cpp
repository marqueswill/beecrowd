#include <iostream>

using namespace std;
int main() {
    int n;
    string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << frase[i];
    }
    cout << "\n";
    return 0;
}