#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;

int main (){
    cout << "hello";
    cout.flush();
    sleep(5);
    cout << " world" << "\n";
    return 0;
}