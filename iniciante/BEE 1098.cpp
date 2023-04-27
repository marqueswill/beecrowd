#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double i, j;
    for (i = 0; i <= 2; i += 0.2) {
        for (j = 1; j <= 3; j++) {
            cout << setprecision(2) << "I=" << i << " J=" << i + j << endl;
        }
    }

    return 0;
}
