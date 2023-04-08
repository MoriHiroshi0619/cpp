#include <iostream>

using namespace std;

class Aviao{

public:
    int velAtual;
    int velMax;
    string tipo;

    void ini(int); //declaramos o prototipo do metodo dentro da declaração da classe.. o método em si programa-se fora 

private:

};

void Aviao::ini(int tp){// 1 = jato, 2 = monomotor, 3 planado
    if(tp == 1){
        this->velMax = 800;
        this->tipo = "Jato";
    }else if(tp == 2){
        this->velMax = 350;
        this->tipo = "Monomotor";
    }else if(tp == 3){
        this->velMax = 180;
        this->tipo = "Planador";
    }else{
        cout << "\n" << "parametro invalido" << endl;
    }
}


int main(int argc, char*argv[]){
    system("clear");
    //em C++ na instacia de uma classe precisa declarar como ponteiro
    Aviao *av1 = new Aviao();
    Aviao *av2 = new Aviao();
    av1->ini(1);
    av2->ini(2);
    cout << av1->velMax << endl;
    cout << av2->velMax;
    cout << endl;
    return 0;
}