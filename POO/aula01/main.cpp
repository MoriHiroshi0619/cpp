#include <iostream>
#include "Aviao.h"

using namespace std;

int main(int argc, char*argv[]){
    system("clear");
    Aviao *av1 = new Aviao(3);
    av1->status();
    cout << endl;
    return 0;
}