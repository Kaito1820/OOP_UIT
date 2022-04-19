#include <iostream>
#include "Clock.cpp"
using namespace std;

int main(){
    int n;
    Clock a;
    a.Set();
    a.ChuanHoa();
    do{
        int x;
        cin >> n;
        if(n == 1) a.ask1();
        else if(n == 2) a.ask2();
        else if(n == 3){
            cin >> x;
            a.ask3(x);
        } 
        else if(n == 4){
            cin >> x;
            a.ask4(x);
        } 
        else if(n == -1) a.Print();
    }while(n != -1);
    return 0;
}