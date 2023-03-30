//      omissão de argumentos e argumentos padrões
#include <iostream>

using namespace std;

        //para deixar um paramtro por default em c++, colocamos o valor default no prototipo da função
void imp(string t="não houve parametros");

int main(int argc, char *argv[]){

    imp("ola mundo");

    cout << endl;
    return 0;
}

void imp(string txt){
    cout << "\n" << txt << "\n";
}