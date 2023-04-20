#include <iostream>
#include "classes.h"
using namespace std;

int main(int argc, char *argv[]){
    system("clear");
    Veiculo *v1 = new Veiculo(2);
    cout << v1->tipo;
    cout << endl;
    return 0;
}