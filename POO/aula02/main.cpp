#include <iostream>
#include "classes.h"
using namespace std;

int main(int argc, char *argv[]){
    system("clear");
    Veiculo *v1 = new Veiculo(2);
    Veiculo *v2 = new Veiculo(1);
    Veiculo *v3 = new Veiculo(3);

    v1->status();
    v2->status();
    v3->setLigado(true);
    v3->status();

    cout << endl;
    return 0;
}