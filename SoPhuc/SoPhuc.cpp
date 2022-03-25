#include <iostream>
#include <cmath>
#include "SoPhuc.h"
using namespace std;

void SoPhuc::input(){
    cin >> this->soThuc;
    cin >> this->soAo;
}

bool SoPhuc::modulo(){
    if(!sqrt(sqr(this->soThuc) + sqr(this->soAo))) return 1;
    return 0;
}

void SoPhuc::Tong(SP a, SP b){
    this->soThuc = a.soThuc + b.soThuc;
    this->soAo = a.soAo + b.soAo;    
} 

void SoPhuc::nhanK(int k){
    this->soThuc *= (float)k;
    this->soAo *= (float)k;
}

void SoPhuc::Nhan(SP a, SP b){
    this->soThuc = a.soThuc*b.soThuc - a.soAo*b.soAo;
    this->soAo = a.soThuc*b.soAo + a.soAo*b.soThuc;
}

void xuli(SP a, SP b){
    SoPhuc c, d, e;
    SoPhuc res;
    c.Tong(a,b);
    
}

