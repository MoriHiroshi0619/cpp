//  argumentos para a main()
#include <iostream>

using namespace std;

int main (int argc, char *argv[]){

    if(argc > 1){
        cout << "números de argumentos = " << argc << "\n";
        for(int i = 0; i < argc; i++){
            cout << argv[i] << "\n\n";
        }
    }else{
        cout << "não foi passado nenhum parametro para a main";
    }

    cout << endl;
    return 0;
}