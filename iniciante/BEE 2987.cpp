#include <iostream>
#include <string>

using namespace std;

int main() {
    string letra;
    cin >> letra;
    int num = (int)letra[0] - 64;

    cout << num << endl;
    return 0;
}