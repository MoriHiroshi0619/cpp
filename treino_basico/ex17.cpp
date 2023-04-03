//aula 3 sobre structs (vetores e struct)

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

    CARRO *carros = new CARRO[5];
    CARRO car1, car2, car3, car4, car5;
    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    carros[0].inserir("corolla", "prata", 2023, 300, 250);
    carros[1].inserir("civic", "preto", 2019, 290, 240);
    carros[2].inserir("Gol", "branco", 2011, 100, 120);
    carros[3].inserir("Palio", "preto", 2008, 110, 120);
    carros[4].inserir("Hilux", "vermelha", 2024, 400, 250);

    for(int i = 0; i < 5; i++){
        carros[i].mostrar(); 
    }

    

    cout << endl;
    return 0;
}