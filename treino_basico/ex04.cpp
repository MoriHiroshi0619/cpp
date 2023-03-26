#include <iostream>

using namespace std;

int n1, n2;

int potencia(int x, int y){
    int res = x;
    for(int i = 1; i < y; i++){
        res = res * x;
    }
    return res;
}

int main (){
    int n3, n4;
    float res;

    n1 = 11;
    n2 = 3; 
    n3 = 5;
    n4 = 2;
    res = (float) n1 / (float) n2;

    cout << res << "\n";

    res = n1 % n2;

    cout << res << "\n";

    res = potencia(5, 4);

    cout << res << "\n";
    return 0;
}