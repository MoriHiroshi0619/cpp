#include <iostream>

using namespace std;

int main (int argc, char *argv[]){
    int *p;
    int vetor[10];
    
    for(int i = 0; i < 10 ; i++){
        vetor[i] = i * 3;
        cout << vetor[i] << " | ";
    }

    p = vetor; // p = &vetor[0]
    cout << "\n";
    for(int i = 0; i < 10 ; i++){
        cout << p + i << "\n";
    }

    for(int i = 0; i < 10 ; i++){
        cout << *(p++) << " | ";
    }
    *(p-=10);
    cout << "\n" << p << "\n";

    /* cout << "\n" << p << "\n";
    cout << p + 1 << "\n";
    cout << p + 2 << "\n";
    cout << p + 3 << "\n";
    cout << p + 4 << "\n";
    cout << "\n" << p << "\n"; */
    cout << endl;
    return 0;
}