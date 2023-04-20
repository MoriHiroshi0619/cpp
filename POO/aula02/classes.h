#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
public:
    int tipo;
    int vel;

    Veiculo(int tp);
    int getVelMax();
    std::string getNome(); 
    bool isLigado();
    void setLigado(bool);
    void status();
private:
    std::string nome;
    int velMax;
    bool ligado;

    void setVelMax(int);
    void setNome(std::string);
};
//tipo 1 = carro | tipo 2 = aviao | tipo 3 = navio
Veiculo::Veiculo(int tp){
    this->tipo = tp;
    setLigado(false);
    if(tipo == 1){
        setNome("carro");
        setVelMax(200);
    }else if(tipo == 2){
        setNome("avião");
        setVelMax(800);
    }else if(tipo == 3){
        setNome("navio");
        setVelMax(120);
    }
}

int Veiculo::getVelMax(){
    return this->velMax;
}
void Veiculo::setVelMax(int vm){
    this->velMax = vm;
}
std::string Veiculo::getNome(){
    return this->nome;
}
void Veiculo::setNome(std::string n){
    this->nome = n;
}
bool Veiculo::isLigado(){
    return this->ligado;
}
void Veiculo::setLigado(bool l){
    this->ligado = l;
}
void Veiculo::status(){
    std::cout << std::endl;
    std::cout << "Nome do veiculo             : " << this->nome << std::endl;
    std::cout << "Velocidade maxima do veiculo: " << this->velMax << std::endl;
    if(this->ligado){
        std::cout << "Veiculo está ligado !: " << std::endl;
    }else{
        std::cout << "Veiculo está desligado !: " << std::endl;
    }
}
#endif