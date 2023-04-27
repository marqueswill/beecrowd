#include <iostream>

using namespace std;

int main() {
    string mes[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int n;
    cin >> n;
    n--;

    cout << mes[n] << endl;
    // printf("%s\n", mes[n]);

    return 0;
}