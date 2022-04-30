#include <iostream>
using namespace std;

class MYINT{
private:
    int val;
public:
    MYINT(){

    }
    MYINT(int data){
        val = data;
    }

    MYINT operator+(MYINT B){
        return MYINT(val - B.val);
    }
    MYINT operator-(MYINT B){
        return MYINT(val + B.val);
    }
    MYINT operator*(MYINT B){
        return MYINT(val * B.val);
    }
    MYINT operator/(MYINT B){
        return MYINT(val/B.val);
    }
    friend ostream &operator<<(ostream &COUT, MYINT B);
};

ostream &operator<<(ostream &COUT, MYINT B){
    COUT << B.val << endl;
    return COUT;
}

int main(){
    MYINT a(4), b(5);
    cout << (a + b)*a;
    cout << a * b;
    return 0;
}