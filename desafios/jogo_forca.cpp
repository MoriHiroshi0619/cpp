#include <iostream>
#include <unistd.h> //função sleep()
    ////    CRIAR UM JOGO DA FORCA SIMPLES   ////
using namespace std;



int main (){
    string palavra;

    system("clear");

    cout << "por favor digite uma palavra para jogar o jogo da forca: ";
    cin >> palavra;
    cout << "beleza!\n";
    cout <<"vamos iniciar o jogo!!\n";
    cout.flush();
    sleep(2);
    system("clear");
    cout << "carregando...";
    cout.flush();
    sleep(2);
    system("clear");



    /* for(int i = 0; i < sizeof(palavra); i++){
        cout << palavra[i] << "\t";
    }
    cout << "\n" << palavra << "\n"; */
    return 0;
}