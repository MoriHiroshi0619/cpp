//ponteiros como parametros de funcões

#include <iostream>

using namespace std;

void somar(int *, int);
void iniVetor(int*);

int main (int argc, char *argv[]){

    //passagem de parametro por referencia
    int num = 0;
    somar(&num, 15);
    cout << num << "\n\n";

    int vetor[5];
    iniVetor(vetor);
    for(int i = 0; i < 5; i++){
        cout << vetor[i] << "\n";
    }

    cout << endl;
    return 0;
}

void somar(int *num, int valor){
    *num += valor;
}

void iniVetor(int *v){
    v[0] = 1;
    v[1] = 10;
    v[2] = 100;
    v[3] = 1000;
    v[4] = 10000;
}