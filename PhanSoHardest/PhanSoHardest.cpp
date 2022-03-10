#include <iostream>
#include "PhanSoHardest.h"
using namespace std;

void PS::Nhap(){
    cin >> tuSo >> mauSo;
    while(mauSo == 0){
        cin >> mauSo;
    }
}

void PS::DoiDau(){
    if(mauSo < 0){
        tuSo = - tuSo;
        mauSo = - mauSo;
    }
}

int PS::UCLN(int a, int b){
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    while(a*b != 0){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

void Cong(PS a, PS b){
    PS res(a.TuSo()*b.MauSo() + a.MauSo()*b.TuSo(), a.MauSo()*b.MauSo());
    res.DoiDau();
    res.Xuat();
}

void Tru(PS a, PS b){
    PS res(a.TuSo()*b.MauSo() - a.MauSo()*b.TuSo(), a.MauSo()*b.MauSo());
    res.DoiDau();
    res.Xuat();
}

void Nhan(PS a, PS b){
    PS res(a.TuSo()* b.TuSo(), a.MauSo()*b.MauSo());
    res.DoiDau();
    res.Xuat();
}

void Chia(PS a, PS b){
    PS res(a.TuSo()*b.MauSo(), a.MauSo()*b.TuSo());
    res.DoiDau();
    res.Xuat();
}

void PS::Xuat(){
    int ucln = UCLN(tuSo, mauSo);
    cout << tuSo/ucln << '/' << mauSo/ucln << endl;
}
