#include <iostream>

using namespace std;

int main(){
    int num, x;

    x = 5;

    cout << "Digite um valor: ";
    cin >> num;

    num >= 10 ? ++x : --x;

    cout << "Novo valor do X: " << x << "\n";

    return 0;
