#include <iostream>
#include "Diem.cpp"
using namespace std;

int main(){
    int n;
    Diem M;
    M.input();
    cin >> n;
    int *ask = new int[n];

    for(int i = 0; i < n; i++){
        cin >> ask[i];
        if(ask[i] == 1) M.ask1();
        else if(ask[i] == 2) M.ask2();
        else if(ask[i] == 3){
            float o, d;
            cin >> o >> d;
            M.ask3(o,d);
        }
    }
    M.output();
    return 0;
}