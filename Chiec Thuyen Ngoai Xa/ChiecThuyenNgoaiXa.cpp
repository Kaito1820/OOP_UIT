#include <iostream>
#include <string>
using namespace std;

class Thuyen{
public:
    string soHieu;
    int soLuongThuyenVien;
    virtual void Nhap(){
        cin >> soHieu;
        cin >> soLuongThuyenVien;
    }
    virtual void Xuat(){};
};

class Ghe : public Thuyen{
public:
    int dongCo;
    void Nhap(){
        Thuyen::Nhap();
        cin >> dongCo;
    }
    void Xuat(){
        string s = soHieu + " - Ghe - " + to_string(soLuongThuyenVien) + " thuyen vien";
        if(dongCo == 1) s += " - Co Dong Co";
        cout << s << endl;
    }
};

class ThuyenBe : public Thuyen{
public:
    string hangDong;
    void Nhap(){
        Thuyen::Nhap();
        cin >> hangDong;
    }
    void Xuat(){
        string s = soHieu + " - Thuyen thuong - " + to_string(soLuongThuyenVien) + " thuyen vien - " + hangDong;
        cout << s << endl;
    }

};

class ThuyenLon : public Thuyen{
public:
    string hangDong;
    int phamViRaKhoi;
    void Nhap(){
        Thuyen::Nhap();
        cin >> hangDong;
        cin >> phamViRaKhoi;
    }
    void Xuat(){
        string s = soHieu + " - Thuyen lon - " + to_string(soLuongThuyenVien) + " thuyen vien - " + hangDong + " - " + to_string(phamViRaKhoi) + "m";
        cout << s << endl;
    }

};
int main(){
    int n;
    cin >> n;
    Thuyen** thuyen = new Thuyen*[n];
    for(int i = 0; i < n; i++){
        int loai;
        cin >> loai;
        if(loai == 1){
            thuyen[i] = new Ghe;
        }
        if(loai == 2){
            thuyen[i] = new ThuyenBe;
        }
        if(loai == 3){
            thuyen[i] = new ThuyenLon;
        }
        thuyen[i]->Nhap();
    }

    for(int i = 0; i < n; i++){
        thuyen[i]->Xuat();
    }
    return 0;
}