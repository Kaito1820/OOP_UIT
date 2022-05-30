#include <iostream>
using namespace std;

static int tongTienMat = 0;
static int maxTriTue = -1;
static int tongSucManh = 0;

class Gate{
public:
    virtual void Nhap() = 0;
};

class BussinessGate : public Gate{
public:
    int donGia;
    int soHang;
    int tongTien;
    void Nhap(){
        cin >> donGia >> soHang;
        tongTienMat += donGia * soHang;
    }
};
class AcademicGate : public Gate{
public:
    int triTue;
    void Nhap(){
        cin >> triTue;
        if(maxTriTue < triTue) maxTriTue = triTue;
    }
};
class PowerGate : public Gate{
public:
    int sucManh;
    void Nhap(){
        cin >> sucManh;
        tongSucManh += sucManh;
    }
};

void output(int a, int b, int c){
    if(a - tongTienMat < 0 || b < maxTriTue || c - tongSucManh < 0){
        cout << -1;
        return;
    } 
    cout << a - tongTienMat << ' ' << b << ' ' << c - tongSucManh;
}

int main(){
    int n;
    cin >> n;
    Gate** gate = new Gate*[n];
    for(int i = 0; i < n; i++){
        int loai;
        cin >> loai;
        if(loai == 1){
            gate[i] = new BussinessGate;
        }
        if(loai == 2){
            gate[i] = new AcademicGate;
        }
        if(loai == 3){
            gate[i] = new PowerGate;
        }
        gate[i]->Nhap();
    }
    int htTien, htTriTue, htSucManh;
    cin >> htTien >> htTriTue >> htSucManh;
    output(htTien, htTriTue, htSucManh);  
    return 0;
}