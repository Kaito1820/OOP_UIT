#include <iostream>
#include "shaco.cpp"
#include "zed.cpp"
using namespace std;

int main(){
    Champ *a[100];
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++){
        int id, damage;
        cin >> id >> damage;
        if(id == 1){
            a[i] = new Shaco(damage);
        }
        else if(id == 2){
            a[i] = new Zed (damage);
        }
    }
    cin >> m;
    for(int i = 0; i < n; i++){
        a[i]->print(m);
    }
    return 0;
}