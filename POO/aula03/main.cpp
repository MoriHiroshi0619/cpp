#include <iostream>
#include "Veiculo.h"
using namespace std;

int main (int argc, char *argv[]){
    system("clear");
    Moto *v1 = new Moto();
    Carro *v2 = new Carro();
    Tanque *v3 = new Tanque();


    v1->status();
    v2->status();
    v3->status();
    cout << endl;
    return 0;
}