#include <iostream>
#include <cmath>
#include "Polygon.h"
using namespace std;

void Polygon::input(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
}

float Polygon::S1(){
    float res1 = x[n-1] * y[0];
    for(int i = 0; i < n-1; i++){
        res1 += x[i] * y[i+1];
    }
    return res1; 
}

float Polygon::S2(){
    float res2 = y[n-1] * x[0];
    for(int i = 0; i < n-1; i++){
        res2 += y[i] * x[i+1];
    }
    return res2; 
}

void Polygon::output(){
    cout << (abs(S1()-S2()))/2;
    delete[] x;
    delete[] y;
}