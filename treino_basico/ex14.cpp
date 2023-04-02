//continuando com listas
#include <iostream>
#include <list>
using namespace std;

int main (int argc, char *argv[]){
    list <int> aula, teste;
    int tam = 10;
    list <int>::iterator it;

    teste.push_front(9);
    teste.push_front(19);
    teste.push_front(191);
    teste.push_front(919);

    for (int i = 0; i < tam; i++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 31);


    it = aula.begin();
    advance(it, 7);
    aula.erase(--it);

    aula.merge(teste);

    cout << "tamamho da lista: " << aula.size() << "\n";

    tam = aula.size();
    aula.sort();
    for (int i = 0; i < tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    //aula.clear();

    cout << "tamamho da lista: " << aula.size() << "\n";

    cout << endl;
    return 0;
}