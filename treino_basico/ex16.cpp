//aula 2 sobre structs (adicionando metodos a um struct)

#include <iostream>

using namespace std;


struct CARRO{
    string nome;
    string cor;
    int ano;
    int pot;
    int veloMax;
    int velAtual;

    void inserir(string tnome, string tcor, int tano, int tpot, int tveloMax){
        nome = tnome;
        cor = tcor;
        ano = tano;
        pot = tpot;
        veloMax = tveloMax;
    }

    void mostrar(){
        cout << "Nome             : " << nome << "\n";
        cout << "Cor              : " << cor << "\n";
        cout << "Ano              : " << ano << "\n";
        cout << "Potencia         : " << pot << "\n";
        cout << "Velocidade Atual : " << velAtual << "\n";
        cout << "Velocidade Maxima: " << veloMax << "\n\n";
    }

    void mudaVel(int mv){
        if(mv > veloMax){
            velAtual = veloMax;
        }else if(mv < 0){
            velAtual = 0;
        }else{
            velAtual = mv;
        }
    }
};

int main (int argc, char *argv[]){

    CARRO car1, car2;

    car1.inserir("corolla", "prata", 2023, 300, 250);
    car2.inserir("civic", "preto", 2019, 290, 240);
    car1.mudaVel(-21);
    car1.mostrar();
    car2.mostrar();
    cout << endl;
    return 0;
}