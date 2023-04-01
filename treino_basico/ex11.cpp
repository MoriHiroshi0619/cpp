    //trabalhando com pilhas / stack em c++
        // o ultimo elemento a entrar na pilha é o primeiro elemento a sair da pilha
        // o primeiro elemento a entrar na pilha é o ultimo elemento a sair da pilha
#include <iostream>
#include <stack> //para trabalhar com pilhas

using namespace std;

int main (int argc, char *argv[]){

    //declaração <tipo de dados para a pilha> nome_da_pilha;
    stack <string> cartas;

    if(cartas.empty()){ //metódo empty retorna true se a pilha estiver vazia
        cout << "pilha vazia\n\n";
    }else{  
        cout << "pilha com cartas\n\n";
    }

    //metódo para adicionar elemento a uma pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "tamanho da pilha: " << cartas.size() << "\n";  //metódo size() mosta o tamanho da pilha
    cout << "carta do topo: " << cartas.top() << "\n"; //metódo top() mostra o conteudo do top da pilha

    //metódo para retirar um elemento da pilha ( retira do topo da pilha )
    //cartas.pop(); 

    //cout << "tamanho da pilha: " << cartas.size() << "\n";
    
    //rotina para deletar todos os elementos da pilha;
    while(!cartas.empty()){
        cout << "removendo: \"" << cartas.top() << "\" da pilha\n";
        cartas.pop();
    }

    cout << endl;
    return 0;
}