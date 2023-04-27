#include <iostream>

using namespace std;

int main() {
    string num, reversed;
    cin >> num;
    reversed = num;
    for (int i = 0; i < num.size(); i++) {
        reversed[i] = num[num.size() - 1 - i];
    }
    // cout << num << endl;
    cout << reversed << endl;

    return 0;
}