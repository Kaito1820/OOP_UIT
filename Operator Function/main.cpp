#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo{
private:
    int tu;
    int mau;
    void UocLuoc(){
        int ucln = __gcd(tu,mau);
        tu /= ucln;
        mau /= ucln;
    }
public:
    PhanSo(int k){
        tu = k; 
    }
    PhanSo(){
        tu = 0;
        mau = 1;
    }
    PhanSo(int x, int y){
        this->tu = x;
        this->mau = y;
        UocLuoc();
    }

    int getTu(){
        return this->tu;
    }

    int getMau(){
        return this->mau;
    }

    void Print(){
        int ucln = __gcd(this->tu, this->mau);
        cout << this->tu/ucln << '/' << this->mau/ucln << endl;
    }

    PhanSo operator+(PhanSo B){
        return PhanSo(tu * B.mau + mau * B.tu, mau * B.mau);
    }

    // PhanSo operator+(int k){
    //     return PhanSo(tu * B.mau + mau * B.tu, mau * B.mau);
    // }
    
    PhanSo operator-(PhanSo B){
        return PhanSo(tu * B.mau - mau * B.tu, mau * B.mau);
    }
    
    PhanSo operator*(PhanSo B){
        return PhanSo(tu * B.tu, mau * B.mau);
    }

    PhanSo operator/(PhanSo B){
        return PhanSo(tu * B.mau, mau * B.tu);
    }

    int operator==(PhanSo B){
        return (tu == B.tu && mau == B.mau);
    }

    int operator>(PhanSo B){
        return (tu > B.tu && mau > B.mau); 
    }

    int operator<(PhanSo B){
        return (tu < B.tu && mau < B.mau); 
    }

    PhanSo& operator++(){ //++a
        ++tu;
        return *this;
    }
    
    // PhanSo& operator++(int){ //a++
    //     ++tu;
    //     return *this;
    // }
};

ostream& operator<<(ostream& COUT, PhanSo& ps){
    COUT << ps.getTu() << '/' << ps.getMau() << '\n';
    return COUT;
}

// PhanSo operator+(PhanSo A, PhanSo B){  // Ham Toan Cuc khong thuoc bat ki lop nao
//     return PhanSo(A.getTu()*B.getMau() + B.getTu() * A.getMau(), A.getMau()*B.getMau());
// }



// PhanSo operator-(PhanSo A, PhanSo B){
//     return PhanSo(A.getTu()*B.getMau() - B.getTu()*A.getMau(), A.getMau()*B.getMau());
// }

int main(){
    PhanSo A, B(2,3), C(4,6), D(1,4), E(1,6);
    
    if(B == C){
        cout << "B is equal C" << endl;
    }
    else if (B > C){
        cout << "B is bigger than C" << endl;
    } 
    else{
        cout << "B is smaller than C" << endl;
    } 

    cout << B << D;
    //A = B + C + D - E;
    //A.Print();
    return 0;
}