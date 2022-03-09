#include <iostream>
#include "PhanSoHarder.cpp"
using namespace std;

void XuatPhanSoMin(PhanSo phanSo[], int n){
    int a = phanSo[0].layTu(), b = phanSo[0].layMau();
    double res = phanSo[0].layTu()*1.0/ phanSo[0].layMau();
    for(int i =  1; i < n; i++){
        double temp = phanSo[i].layTu()*1.0/ phanSo[i].layMau();
        if(temp < res){
            res = temp;
            a = phanSo[i].layTu();
            b = phanSo[i].layMau();
        }
    }
    cout << a << '/' << b << '\n';
}

void XuatPhanSoMax(PhanSo phanSo[], int n){
    int a = phanSo[0].layTu(), b = phanSo[0].layMau();
    double res = phanSo[0].layTu()*1.0/ phanSo[0].layMau();
    for(int i =  1; i < n; i++){
        double temp = phanSo[i].layTu()*1.0/ phanSo[i].layMau();
        if(temp > res){
            res = temp;
            a = phanSo[i].layTu();
            b = phanSo[i].layMau();
        }
    }
    cout << a << '/' << b << '\n';
}

int main(){
    PhanSo phanSo[100];
    int n ;
    cin >> n;
    for(int i = 0; i < n ;i++){
        phanSo[i].Nhap();
    }

    XuatPhanSoMin(phanSo, n);
    XuatPhanSoMax(phanSo, n);


    return 0;
}