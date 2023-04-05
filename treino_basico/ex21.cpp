//alocacão de memoria dinamica

#include <iostream>
#include <stdio.h> //fgets()
#include <stdlib.h> //malloc() 

using namespace std;

int main (int argc, char *argv[]){
    char *nome;
    char vnome[50];
    //malloc retorna void.. para isso fazemos um typecast no retorno
    nome = (char *) malloc(sizeof(char));
    cout << "insira um nome: ";
    fgets(nome, 50, stdin);

    cout << nome << "\n"; 

    cout << "insira um nome: ";
    fgets(vnome, 50, stdin);

    cout << vnome << "\n"; 

    cout << sizeof(nome) << "\n"; 
    cout << sizeof(vnome);

    cout << endl;
    return 0;
}