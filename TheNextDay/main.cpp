#include <iostream>
#include "date.cpp"
using namespace std;



int main(){
    int d, m, y;
    Date today;

    cin >> d >> m >> y;
    today.set(d, m, y);
    today.add(d, m, y);
    today.output();
    return 0;
}