#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo{
public:
    int vel;
    int blind;
    int rodas;

    int getTipo();
    void setTipo(int);
    int getVelMax();
    void setVelMax(int);
    bool isArmado();
    void setArmado(bool);
    void status();
private:
    int tipo; //tipo 1 = moto|2 = carro|3 = caminhao|4 = tanque
    int velMax;
    bool armado;
};

int Veiculo::getTipo(){
    return this->tipo;
}
void Veiculo::setTipo(int tp){
    this->tipo = tp;
}
int Veiculo::getVelMax(){
    return this->velMax;
}
void Veiculo::setVelMax(int vm){
    this->velMax = vm;
}
bool Veiculo::isArmado(){
    return this->armado;
}
void Veiculo::setArmado(bool a){
    this->armado = a;
}
//kjbbjbjk


void Veiculo::status(){
    std::cout << "Tipo do veiculo             : " << tipo <<std::endl;
    std::cout << "Velocidade maxima do veiculo: " << velMax <<std::endl;
    std::cout << "Velocidade atual do veiculo : " << vel <<std::endl;
    std::cout << "Blindagem do veiculo        : " << blind <<std::endl;
    std::cout << "Numero de rodas do veiculo  : " << rodas <<std::endl;
    if(armado){
        std::cout << "Veiculo de ataque" <<std::endl;
    }else{
        std::cout << "Veiculo de fuga" <<std::endl;
    }
    std::cout << "---------------------------------" <<std::endl;
}
//classe Moto HERDA propriedades da classe Veiculo
class Moto:public Veiculo{
public:
    Moto();
private:
};

Moto::Moto(){
    this->vel = 0;
    this->blind = 0;
    this->rodas = 2;
    this->setTipo(1);
    this->setVelMax(120);
    this->setArmado(false);
}


class Carro:public Veiculo{
public:
    Carro();
private:
};

Carro::Carro(){
    this->vel = 0;
    this->blind = 1;
    this->rodas = 4;
    this->setTipo(2);
    this->setVelMax(180);
    this->setArmado(false);
}

class Tanque:public Veiculo{
public:
    Tanque();
};

Tanque::Tanque(){
    this->vel = 0;
    this->blind = 5;
    this->rodas = 8;
    this->setTipo(4);
    this->setVelMax(60);
    this->setArmado(true);
}
#endif