#pragma
#include <cmath>
class SoPhuc{
private:
    float soThuc;
    float soAo;
public:
    SoPhuc(){};
    SoPhuc(const SoPhuc &object);
    void input();
    void output();
    bool modulo();
    float getSoThuc();
    float getSoAo();
    void Tong(SoPhuc a, SoPhuc b);
    void nhanK(int);
    void Nhan(SoPhuc a, SoPhuc b);
    void Chia(SoPhuc a, SoPhuc b);
};

float sqr(float x);
void xuli(SoPhuc a, SoPhuc b);

