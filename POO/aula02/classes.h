#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
public:
    int velMax;
    int tipo;
    Veiculo(int tp);
private:
    std::string nome;
    int velAtual;
    bool ligado;

};
//tipo 1 = carro | tipo 2 = aviao | tipo 3 = navio
Veiculo::Veiculo(int tp){
    tipo = tp;
    if(tipo == 1){
        nome = "carro";
        velMax = 200;
    }else if(tipo == 2){
        nome = "avião";
        velMax = 800;
    }else if(tipo == 3){
        nome = "navio";
        velMax = 120;
    }
}


#endif