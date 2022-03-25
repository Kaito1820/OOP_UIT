#include <iostream>
#include <string>
#include "candidate.h"
using namespace std;

void Candidate::input(){
    cin.ignore();
    getline(cin, ma);
    getline(cin, hoTen);
    getline(cin, ngaySinh);
    do{
        cin >> diemToan >> diemVan >> diemAnh;
    }while((diemToan < 0 && diemToan > 10) || (diemVan < 0 && diemVan > 10) || (diemAnh < 0 && diemAnh > 10));
}

void Candidate::setSTT(int stt){
    this->stt = stt;
}

bool Candidate::getFlag(){
    return this->flag;
}

int Candidate::tongDiem(int a, int b, int c){
    return a+ b+ c;
}

void Candidate::output(){
    if(tongDiem(this->diemToan, this->diemVan, this->diemAnh) > 15){
        cout << "-" << endl;
        cout << "STT " << this->stt << ":" << endl;
        cout << "Thong tin hoc sinh:" << endl;
        cout << "Ma: " << this->ma << endl;
        cout << "Ho ten: " << this->hoTen << endl;
        cout << "Ngay sinh: " << this->ngaySinh << endl;
        cout << "Diem toan: " << this->diemToan << endl;
        cout << "Diem van: " << this->diemVan << endl;
        cout << "Diem anh: " << this->diemAnh << endl;
        this->flag = 1;
    }
}