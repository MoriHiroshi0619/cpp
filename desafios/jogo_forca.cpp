#include <iostream>
#include <unistd.h> //função sleep()
#include <chrono>
#include <thread>
#include <cstring>
    ////    CRIAR UM JOGO DA FORCA SIMPLES   ////
using namespace std;

#define MAX_TENTATIVAS 10

void inicializar_progesso (string palavra, string &progresso){
    for(int i = 0; i < palavra.length(); i++){
        progresso[i] = '_';
    }
}

void texto_digitalizado(string palavra){
    for(int i = 0; i < palavra.length(); i++){
        cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
        cout << palavra[i];
    }
}

void exibir_progresso(string progresso){
    for(int i = 0; i < progresso.length(); i++){
        cout << progresso[i] << " ";
    }
}

void mensagem_inicio (){
    cout << "beleza!\n";
    cout <<"vamos iniciar o jogo!!\n";
    cout.flush();
    sleep(2);
    system("clear");
    texto_digitalizado("carregando...");
    cout.flush();
    system("clear");
}

int verificar_letra(char letra, string palavra){
    int existe = 0;
    for(int i = 0; i < palavra.length(); i++){
        if(palavra[i] == letra){
            existe = 1;
        }
    }
    return existe;
}


void jogar(int tentativas, string progresso, string palavra){
    bool win = false;
    while(win){
        char letra;
        system("clear");
        exibir_progresso(progresso);
        cout << "por favor escolha uma letra:";
        cin >> letra;
        if(verificar_letra(letra, palavra)){
            for(int i = 0; i < palavra.length(); i++){
                if(palavra[i] == letra){
                    progresso[i] = letra;
                }
            }
        }else{
            cout << "letra incorreta";
            cout.flush();
            sleep(1);
        }
    }
}

int main (){
    string palavra;
    string progresso;
    int tentativas = MAX_TENTATIVAS;

    system("clear");

    cout << "por favor digite uma palavra para jogar o jogo da forca: ";
    cin >> palavra;

    progresso = palavra;
    inicializar_progesso(palavra, progresso);
    //mensagem_inicio();

    jogar(tentativas, progresso, palavra);

    cout << endl;
    return 0;
}