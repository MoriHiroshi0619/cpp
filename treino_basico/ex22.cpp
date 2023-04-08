#include <iostream>
#include <iomanip> //manipulção de entrada e saida
#include <math.h>
//trabalhando com cout <<
using namespace std;

int main (int argc, char *argv[]){
    int num = 10;
    float pi = M_PI;

    system("clear");
    cout << "valor de num em decimal = " << num << endl;
    cout << "valor de num em hexadecimal = " << hex << num << endl;
    cout << "valor de num em octal = " << oct << num << endl;
    cout << "Valor de num em binário = " << setbase(16) << num << endl; //setbase(base) converte para a base que quisermos
    cout.precision(3); //definindo o numero de casas decimais que sera exibido
    cout << "\nvalor de PI: " << pi << endl;
    //setw(inteiro) define a largura em que será exibido
    //setfill('caracter') define com o que será preenchido o espaço vazio
    cout << "valor de num com largura: " << setw(5) << setfill('0') << setbase(10) << num << endl;
    cout.precision(-1); //voltar ao padrao anterior
    cout << "\nvalor de PI: " << pi << endl;
    cout << endl;
    return 0;
}