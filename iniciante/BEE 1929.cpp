#include <iostream>
using namespace std;

bool ehTriangulo(int a, int b, int c);

bool tri = false;
int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    if (ehTriangulo(a, b, c))
        printf("S\n");
    else if (ehTriangulo(a, b, d))
        printf("S\n");
    else if (ehTriangulo(a, c, d))
        printf("S\n");
    else if (ehTriangulo(b, c, d))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}

bool ehTriangulo(int a, int b, int c) {
    if (abs(b - c) < a && a < b + c && abs(b - a) < c && c < b + a && abs(c - a) < b && b < c + a)
        return true;
    else
        return false;
}