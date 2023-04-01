// aprendendo fila com c++
#include <iostream>
#include <queue> //bib para trabalhar com filas em c++
/* metódos:
empty()
size()
front()
back()
push()
pop()
*/

using namespace std;
    //fila: diferente da pilha, em uma fila, o primeiro a entrar é o primeiro a sair
int main (int argc, char *argv[]){

    queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");
    cartas.push("Jack de Copas");
    cartas.push("Jack de Espadas");
    cartas.push("Jack de Ouros");
    cartas.push("Jack de Paus");
    cartas.push("Rainha de Copas");
    cartas.push("Rainha de Espadas");
    cartas.push("Rainha de Ouros");
    cartas.push("Rainha de Paus");

    cout << cartas.size() << "\n";
    cout << "primeira carta: " << cartas.front() << "\n";
    cout << "ultima carta: " << cartas.back() << "\n\n";

    

    /* while(!cartas.empty()){
        cout << " removendo carta: \"" << cartas.front() << "\"\n";
        cartas.pop(); //metódo pop() em fila sempre remove o primeiro elemento da fila.
    } */

    cout << endl;
    return 0;
}