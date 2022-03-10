#pragma
typedef class PhanSoHardest{
private:
    int tuSo;
    int mauSo;
public:
    void Nhap();
    void Xuat();
    PhanSoHardest(){

    }
    PhanSoHardest(int a, int b){
        tuSo = a;
        mauSo = b;
    }
    int TuSo(){
        return tuSo;
    }
    int MauSo(){
        return mauSo;
    }
    void DoiDau();
    int UCLN(int a, int b);
} PS;

void Cong(PS a, PS b);
void Tru(PS a, PS b);
void Nhan(PS a, PS b);
void Chia(PS a, PS b);