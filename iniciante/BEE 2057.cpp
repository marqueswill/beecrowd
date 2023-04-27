#include <iostream>

using namespace std;

int main() {
    int s, t, f;
    cin >> s >> t >> f;

    t = t + s + f;

    if (t > 24)
        t -= 24;
    else if (t < 0)
        t += 24;

    printf("%d\n", t);

    return 0;
}