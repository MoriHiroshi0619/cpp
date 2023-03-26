#include <iostream>

using namespace std;

int main(){
    int idade;
    char letra;
    double peso;
    bool casado = true;
    string nome;
    
    cout << "informe a idade: ";
    cin >> idade;
    cout << "informe uma letra: ";
    cin >> letra;
    cout << "informe um peso: ";
    cin >> peso;
    cout << "informe seu nome: ";
    cin >> nome;


    cout << "\nidade: " << idade << "\nletra: " << letra << "\npeso: " << peso << "\ncasado: " << casado << "\nnome: " << nome << "\n";
    
    /* cout << idade << "\n";
    cout << letra << "\n";
    cout << peso << "\n";
    cout << casado << "\n";
    cout << nome << "\n"; */
    return 0;
}
