//aula 2 sobre structs (adicionando metodos a um struct)

#include <iostream>

using namespace std;


struct CARRO{
    string nome;
    string cor;
    int ano;
    int pot;
    int veloMax;

    void inserir(string tnome, string tcor, int tano, int tpot, int tveloMax){
        nome = tnome;
        cor = tcor;
        ano = tano;
        pot = tpot;
        veloMax = tveloMax;
    }

    

};

int main (int argc, char *argv[]){


    cout << endl;
    return 0;
}