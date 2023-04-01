//trabalhando com listas em c++
#include <iostream>
#include <list> //bib para trabalhar com listas em c++
using namespace std;

int main (int argc, char *argv[]){

    //declaração de uma estrutura de lista    
    list <int> aula;
    int tam = 10; //tamanho inicial da lista
    list <int>::iterator it; //definindo um iterator

    //inserindo elementos na lista
    for (int i = 0; i < tam; i++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 5);
    
    aula.insert(it, 15);

    aula.sort();
    //aula.reverse();

    cout << "tamanho da lista: " << aula.size() << "\n";
    cout << "primeiro elemento da lista: " << aula.front() << "\n";
    cout << "ultimo elemento da lista: " << aula.back() << "\n\n";

    tam = aula.size();

    for (int i = 0; i < tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    cout << endl;
    return 0;
}