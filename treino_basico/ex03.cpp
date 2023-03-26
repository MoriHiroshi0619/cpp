#include <iostream>

using namespace std;

#define PI 3.1415

//constantes tambem podem guardar comandos;
#define NOME cout << "\nAnderson Hiroshi Mori Correia\n";


int main(){
    int vidas, tiros, life;
    vidas = 3;
    tiros = 500;
    life = 100;
    cout << "\nvidas: " << vidas << "\ntiros: " << tiros << "\nlife: " << life << "\n";
    cout << "\n\npi: " << PI << "\n";
    NOME;
    return 0;
}