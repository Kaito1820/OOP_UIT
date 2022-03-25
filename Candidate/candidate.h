#include <string>
#pragma
using namespace std;

class Candidate{
private:
    int stt;
    string ma;
    string hoTen;
    string ngaySinh;
    int diemToan;
    int diemVan;
    int diemAnh;
    bool flag = 0;
public:
    Candidate(){};
    void input();
    void output();
    void setSTT(int stt);
    bool getFlag();
    int tongDiem(int a,int b,int c);
};