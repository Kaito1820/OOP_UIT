#include <iostream>
#include "PhanSo.h"
using namespace std;

void PhanSo::Nhap(){
    cin >> tuSo;
    do{
        cin >> mauSo;
    }while(!mauSo); 
}

int PhanSo::UCLN(int a, int b){
    if(a < 0) a = -a;
    if(b < 0) b = -b;

    while (a*b != 0){ 
        if (a > b){
            a %= b; 
        }else{
            b %= a;
        }
    }
    return a + b; 
}

void PhanSo::RutGon(){
    int uc= UCLN(tuSo, mauSo);
    tuSo /= uc;
    mauSo /= uc;
}

void PhanSo::Xuat(){
    cout << tuSo << '/' << mauSo << endl; 
}