#include <iostream>

using namespace std;

int main() {
    int n, maior, pos;

    for (int i = 1; i <= 100; i++) {
        cin >> n;
        if (i == 1) {
            maior = n;
            pos = 1;
        } else {
            if (n > maior) {
                maior = n;
                pos = i;
            }
        }
    }

    cout << maior << endl;
    cout << pos << endl;
    
    return 0;
}