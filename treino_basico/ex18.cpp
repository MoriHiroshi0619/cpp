//trabalhando com ponteiros em c++

#include <iostream>

using namespace std;

int main (int argc, char *argv[]){
    int num = 10;
    int *n;
    string veiculo = "carro";
    string *pv;
    
    n = &num;
    pv = &veiculo;

    cout << n << "\n";
    cout << veiculo << "\n";
    cout << pv << "\n";

    *pv = "moto";
    cout << veiculo << "\n";

    cout << endl;
    return 0;
}