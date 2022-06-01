#include <iostream>
#include <cstring>
#include "Cow.cpp"
#include "Sheep.cpp"
#include "Goat.cpp"
using namespace std;

int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    Cow A;
    Sheep B;
    Goat C;

    string s = "";
    for(int i = 0; i < a; i++){
        s += "Booo,";
    }
    
    for(int i = 0; i < b; i++){
        s += "Beee,";
    }
    
    for(int i = 0; i < c; i++){
        s += "Eeee,";
    }
    s[s.length() - 1] = ' ';
    cout << s << endl;
    A.luongSua(a,n);
    B.luongSua(b,n);
    C.luongSua(c,n);
    return 0;
}