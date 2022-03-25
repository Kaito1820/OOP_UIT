#include <iostream>
#include "Diem.h"
using namespace std;

void Diem::input(){
    cin >> this->x;
    cin >> this->y;
}

void Diem::ask1(){
    this->x *= 2;
    this->y *= 2;
}

void Diem::ask2(){
    this->x = 0;
    this->y = 0;
}

void Diem::ask3(float o, float d){
    if(!o) this->x += d;
    else this->y += d;
}

void Diem::output(){
    cout << '(' << this->x << ',' << this->y << ')';
}