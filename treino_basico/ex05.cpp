//operadores ternarios em c++

#include <iostream>

using namespace std;

int main(){
    //sintaxe de uso do operador ternario
    //(expressão) ? (código true) : (código false);
    
    int n1, n2, nota;
    string res;

    cout << "digite a primeira nota: ";
    cin >> n1;
    cout << "digite a segunda nota: ";
    cin >> n2;

    nota = n1 + n2;    

    // >= 60 Aprovado : <60 Reprovado; 

    //nota >= 60 ? res = "Aprovado" : res = "Reprovado";

    res = nota >= 60 ? "Aprovado" : "Reprovado";

    cout << "O aluno está " << res << "\n";

    return 0;
}
