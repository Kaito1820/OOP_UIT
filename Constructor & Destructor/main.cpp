#include <iostream>
using namespace std;

class Rectangle{
private:
    float *dai;
    float *rong ;
public:
    Rectangle(int d, int r):Rectangle(){
        *dai = d;
        *rong = r;
    }
    Rectangle(){
        dai = new float(0);
        rong = new float(0);
    }
/*
or
    Rectangle(int d, int r){
        dai = new float(0);
        rong = new float(0);
        *dai = d;
        *rong = r;
    }
or
    Rectangle(int d, int r){
        Rectangle();
        *dai = d;
        *rong = r;
    }
*/
    ~Rectangle(){
        delete dai;
        delete rong;
    }

    float ChuVi(){
        return (*dai+*rong)*2;
    }
    float DienTich(){
        return (*dai)*(*rong);
    }
};

int main(){
    Rectangle a(2, 3);
    cout << a.ChuVi();
    return 0;
}