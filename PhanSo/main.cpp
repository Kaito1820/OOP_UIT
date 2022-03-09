#include <iostream>
#include "PhanSo.cpp"
using namespace std;

int main(){
    PhanSo phanSo[100];
    int n ;
    cin >> n;
    for(int i = 0; i < n ;i++){
        phanSo[i].Nhap();
    }
    for(int i = 0; i < n ;i++){
        phanSo[i].RutGon();
    }
    for(int i = 0; i < n ;i++){
        phanSo[i].Xuat();
    }
    
    return 0;
}