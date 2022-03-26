#include <iostream>
#include <cmath>
#include "SoPhuc.h"
using namespace std;

SoPhuc::SoPhuc(const SoPhuc &object){
    this->soThuc = object.soThuc;
    this->soAo = object.soAo;
}

void SoPhuc::input(){
    cin >> this->soThuc;
    cin >> this->soAo;
}

void SoPhuc::output(){
    if(!soThuc) cout << soAo << 'i';
    else if(!soAo) cout << soThuc;
    else if(soAo < 0) cout << soThuc << " - " << -soAo << 'i';
    else cout << soThuc << " + " << soAo << 'i';
}

bool SoPhuc::modulo(){
    if(!sqrt(sqr(this->soThuc) + sqr(this->soAo))) return 1;
    return 0;
}

float SoPhuc::getSoThuc(){
    return soThuc;
}

float SoPhuc::getSoAo(){
    return soAo;
}

void SoPhuc::Tong(SoPhuc a, SoPhuc b){
    this->soThuc = a.soThuc + b.soThuc;
    this->soAo = a.soAo + b.soAo;    
} 

void SoPhuc::nhanK(int k){
    this->soThuc *= (float)k;
    this->soAo *= (float)k;
}

void SoPhuc::Nhan(SoPhuc a, SoPhuc b){
    this->soThuc = a.soThuc*b.soThuc - a.soAo*b.soAo;
    this->soAo = a.soThuc*b.soAo + a.soAo*b.soThuc;
}

void SoPhuc::Chia(SoPhuc a, SoPhuc b){
    float mau = sqr(b.soThuc) + sqr(b.soAo);
    this->soThuc = (a.soThuc*b.soThuc + a.soAo*b.soAo)/mau;
    this->soAo = (a.soAo*b.soThuc - a.soThuc*b.soAo)/mau;
}

float sqr(float x){
    return x*x;
}

void xuli(SoPhuc a, SoPhuc b){
    SoPhuc c, d, e, cd, res;
    SoPhuc temp1 = a;
    SoPhuc temp2 = b;
    
    c.Tong(a,b); // (c1 + c2)
    
    temp1.nhanK(-2);
    d.Tong(b,temp1); // (c2 - 2*c1)
    
    temp2.nhanK(-4);
    e.Tong(a,temp2); // (c1 - 4*c2)

    cd.Nhan(c,d); // (c1 + c2) * (c2 - 2*c1)

    res.Chia(cd, e); // A = (c1 + c2) * (c2 - 2*c1) / (c1 - 4*c2)
    res.output();
}

