#include <iostream>
#include "PhanSoHardest.cpp"
using namespace std;

int main(){
    PS a, b;
    a.Nhap();
    b.Nhap();
    a.DoiDau();
    b.DoiDau();
    Cong(a,b);
    Tru(a,b);
    Nhan(a,b);
    Chia(a,b);
    return 0;
}