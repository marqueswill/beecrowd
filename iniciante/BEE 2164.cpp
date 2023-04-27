#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    double ans;
    cin >> n;
    ans = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / (sqrt(5));
    printf("%.1lf\n", ans);
    return 0;
}