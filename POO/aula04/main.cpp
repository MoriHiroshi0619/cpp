#include <iostream>
#include "classes.h"
using namespace std;

int main (int argc, char *argv[]){
    system("clear");
    Base1 *obj1 = new Base1();
    Base2 *obj2 = new Base2();
    CBF *obj3 = new CBF();
    obj1->impBase1();
    obj2->impBase2();
    obj3->impBase1();
    obj3->impBase2();
    cout << endl;
    return 0;
}