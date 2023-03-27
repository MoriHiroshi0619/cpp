#include <iostream>

using namespace std;

int main (){
    //int tamanho_vetor = 4;
    int v[] = {10,20,30,40};
    int i;
    for(i = 0 ; i < sizeof(v) / 4 ; i++){
        //v[i] = i * 5;
        cout << v[i] << "\n";
    }
    return 0;
}