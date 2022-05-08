#include "champ.cpp"
#include <iostream>
using namespace std;
class Zed: public Champ{
public:
    Zed(int damage): Champ(damage){

    }

    void print(int m){
        int temp = m/3;
        int damage = getDamage() + 10;
        cout << "Zed - Sat thuong gay ra: " << damage * temp * 3 + damage * (m - temp);
        cout << '\n';
    }
};