#include "champ.cpp"
#include <iostream>
using namespace std;
class Shaco: public Champ{
public:
    Shaco(int damage): Champ(damage){

    }
    
    void print(int m){
        cout << "Shaco - Sat thuong gay ra: " << (getDamage() + 10) * 2 * m;
        cout << '\n';
    }
};