//aprendendo a trabalhar com o vector
#include <iostream>
#include <vector> //trabalhar com vetor de forma mais moderna

using namespace std;

int main (int argc, char*argv[]){
    system("clear");
    vector <int> num1, num2; //criando um vetor do tipo inteiro chamado 'num'. não precisa dizer o tamanho
    int i;

    num1.push_back(12); //push_back() adiciona no final
    num1.push_back(4); num1.push_back(3); num1.push_back(15); num1.push_back(32);
    num1[2] = 5; //esse método de controle por [] só é valido para indices já existentes
    num2.push_back(15); num2.push_back(9); num2.push_back(12); num2.push_back(2); num2.push_back(20);
    
    //método insert(index, valor) insere valores em indices determinados 
    num1.insert(num1.begin() + 2, 50); 
    num2.insert(num2.end() - 1, 21);
    //método erase(index) deleta um valor do vector
    num1.erase(num1.begin());

    //num1.swap(num2); //método swap() troca os valores de dois vectors
    cout << "tamanho do vector num1: " << num1.size() << endl;
    cout << "tamanho do vector num2: " << num2.size() << endl;
    cout << "primeiro valor de num1: " << num1.front() << endl;
    cout << "ultimo valor de num2  : " << num2.back() << endl;
    cout << "Valor do meio de num 2: " << num2.at(num2.size() / 2) << endl;
    for(i = 0; i < num1.size(); i++){
        cout << num1[i] << " | ";
    }

    cout << endl;

    for(i = 0; i < num2.size(); i++){
        cout << num2[i] << " | ";
    }
 
    //método empty() retorna valor boleano se o vector tá vazio ou não
    while(!num1.empty()){ //poderia usar o método clear para fazer esse mesmo serviço
        num1.pop_back(); //retira o ultimo elemento do vector
    }
    num2.clear();
    cout << endl;
    cout << "Novo tamanho do vector num1: " << num1.size() << endl;
    cout << "Novo tamanho do vector num2: " << num2.size() << endl;

    cout << endl;
    return 0;
}
