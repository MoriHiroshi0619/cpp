//aula 1 sobre structs

#include <iostream>

using namespace std;

struct CARRO{
    string nome;
    string cor;
    int ano;
    int pot;
    int veloMax;
};


int main (int argc, char *argv[]){
    CARRO car1, car2;

    car1.ano = 2023;
    car1.cor = "prata";
    car1.nome = "civic";
    car1.pot = 450;
    car1.veloMax = 350;

    cout << "Nome             : " << car1.nome << "\n";
    cout << "Cor              : " <<  car1.cor << "\n";
    cout << "Ano              : " <<  car1.ano << "\n";
    cout << "Potencia         : " <<  car1.pot << "\n";
    cout << "Velocidade Maxima: " <<  car1.veloMax << "\n\n";

    car2.ano = 2008;
    car2.cor = "Branco";
    car2.nome = "Corolla";
    car2.pot = 250;
    car2.veloMax = 260;

    cout << "Nome             : " << car2.nome << "\n";
    cout << "Cor              : " <<  car2.cor << "\n";
    cout << "Ano              : " <<  car2.ano << "\n";
    cout << "Potencia         : " <<  car2.pot << "\n";
    cout << "Velocidade Maxima: " <<  car2.veloMax << "\n";

    cout << endl;
    return 0;
}