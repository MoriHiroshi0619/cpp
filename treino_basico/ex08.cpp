//      sobrecarga de funções em c++

#include <iostream>

using namespace std;

void soma();
void soma(int, int);

int main(int argc, char *argv[]){

    soma(5,10);
    soma();
    cout << endl;
    return 0;
}

void soma(int n1, int n2){
    int re;
    re = n1 + n2;
    cout << "\nsoma de " << n1 << " com " << n2 << " = " << re; 
}

void soma(){
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;
    cout << "\nsoma de " << n1 << " com " << n2 << " = " << re; 
}