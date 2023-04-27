#include <iostream>
 
using namespace std;
 
int main() {
    
    int c,forca;
    string nome;

    cin >>c;
    for (int i=0; i<c;i++){
        cin >> nome >> forca;
        if (nome == "Thor")
            printf("Y\n");
        else
            printf("N\n");

    }
 
    return 0;
}