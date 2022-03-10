#include <iostream>
#include <string>
#include "SV.h"
using namespace std;

void SV::Nhap(){
    getline(cin, this-> hoTen);
    do{
        cin >> this -> diemToan >> this -> diemVan;
    }while(diemToan < 0 || diemToan > 10 || diemVan < 0 || diemVan > 10);
}

void SV::Xuat(){
    cout << "Thong tin hoc sinh: " << '\n';
    cout << "Ho ten: " << this -> hoTen << '\n';
    cout << "Diem toan: " << this -> diemToan << '\n';
    cout << "Diem van: " << this -> diemVan << '\n';
    cout << "Diem trung binh: " << DiemTrungBinh();
}

float SV::DiemTrungBinh(){
    return (float)(diemToan+diemVan)/2;
}