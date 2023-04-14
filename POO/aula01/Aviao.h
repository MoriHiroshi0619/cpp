#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED
#include <iostream>

class Aviao{
public:
    int vel;
    int velMax;
    std::string tipo; //como não estamos usando o namespace std, temos que informar em cada linha.

    Aviao(int tp); //metodo construtor
    void status(); //metodo normal
private:

};

Aviao::Aviao(int tp){ //1 =jato 2 = monomoto 3 = palnador
    vel = 0;

    if(tp == 1){
        tipo = "Jato";
        velMax = 800;
    }else if(tp == 2){
        tipo = "Monomotor";
        velMax = 350;
    }else if(tp == 3){
        tipo = "Planador";
        velMax = 180;
    }else{
        std::cout << "ERRO: tipo indefinido";
        tipo = "indefinido";
    }
}

void Aviao::status(){
    std::cout << std::endl << "velocidade atual  : " << vel;
    std::cout << std::endl << "tipo avião        : " << tipo;
    std::cout << std::endl << "velocidade maxima : " << velMax;
}

#endif