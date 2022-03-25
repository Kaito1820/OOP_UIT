#include <iostream>
#include "SoPhuc.cpp"
using namespace std;

int main(){
    SoPhuc a, b;
    a.input();
    b.input();
    if(a.modulo() || b.modulo()){
        cout << "ERROR";
        return 0;
    }
    return 0;
}
