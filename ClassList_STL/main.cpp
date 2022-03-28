#include <iostream>
#include <list>
using namespace std;

int main(){
    list <double> a;
    int n;
    do{
        double x;
        cin >> n;
        if(!n){
            cin >> x;
            a.push_back(x);
        }
        else if(n == 1){
            cin >> x;
            for(list <double>::iterator it = a.begin(); it != a.end(); it++){
                if(*it == x){
                    list <double>::iterator temp1 = it;
                    list <double>::iterator temp2= it++;
                    a.erase(temp1, temp2);
                    break;
                } 
            }
        }
        else if(n == 2){
            cin >> x;
            a.remove(x);
        }
        else if(n == 3){
            list <double>::iterator it = a.begin();
            unsigned int pos;
            cin >> pos;
            cin >> x;
            advance(it, pos);
            *it = x;
        }
        else if(n == -1){
            if(!a.empty()) cout << '[';
            for(list <double>::iterator it = a.begin(); it != a.end(); it++){
                if(*it != a.back()) cout << *it << ',';
                else cout << *it << ']';
            }
        }
    }while(n != -1);
    return 0;
}