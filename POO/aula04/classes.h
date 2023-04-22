#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
using namespace std;

class Base1{
public:
    void impBase1();
};

class Base2{
public:
    void impBase2();
};

void Base1::impBase1(){
    cout << "imprimindo da classe Base1" << endl;
}
void Base2::impBase2(){
    cout << "imprimindo da classe Base2" << endl;
}

class CBF:public Base1, public Base2{
    
};


#endif