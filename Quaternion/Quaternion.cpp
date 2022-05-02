#include <iostream>
using namespace std;

class Quaternion{
private:
    int a,b,c,d;
public:
    Quaternion(){

    }

    Quaternion(int a, int b, int c, int d){
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    Quaternion operator+(const Quaternion B) const{
        return Quaternion(a + B.a, b + B.b, c + B.c, d + B.d);
    }
    Quaternion operator-(const Quaternion B) const{
        return Quaternion(a - B.a, b - B.b, c - B.c, d - B.d);
    }
    friend istream &operator>>(istream &CIN, Quaternion &A);
    friend ostream &operator<<(ostream &COUT,const Quaternion &A);
};

istream &operator>>(istream &CIN, Quaternion &A){
    CIN >> A.a >> A.b >> A.c >> A.d;
    return CIN;
}
ostream &operator<<(ostream &COUT,const Quaternion &A){
    COUT << '(' << A.a << ',' << A.b << ',' << A.c << ',' << A.d << ')';
    return COUT;
}

int main(){
    Quaternion a, b;
    cin >> a >> b;
    cout << a + b;
    cout << endl;
    cout << a - b;
    return 0;
}