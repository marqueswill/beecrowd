#include <iostream>

using namespace std;

int main() {
    int age, cnt = 0;
    double sum = 0;

    while (true) {
        cin >> age;

        if (age < 0)
            break;

        sum += age;
        cnt++;
    }

    printf("%.2lf\n", sum / cnt);

    return 0;
}