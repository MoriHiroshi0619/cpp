// trabalhando com enumeradores
//enum no fundo só armazena numerais inteiros
#include <iostream>

using namespace std;

int main (int argc, char *argv[]){

    //por padrão, o primeiro elemento recebe o valor 1
    //os valores são sequenciais a partir do valor do primerio elemento
    //(se você não especificar nenhum valor no enum)
    enum armas{
        fuzil = 10,
        revolver = 6, 
        rifle = 3,
        escopeta = 1
    };

    armas armaSel;
    armaSel = fuzil;

    cout << armaSel;
    cout << endl;
    return 0;
}