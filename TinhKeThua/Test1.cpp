#include <iostream>
using namespace std;

class CSquare{
protected: // chi duoc truy cap boi cac phuong thuc trong class va cac CON cua no
    float a;
public:
    CSquare(){
        a = 0;
    }

    CSquare(float a):CSquare(){
        this->a = a;
    }

    float getArea(){
        return a*a;
    }
    
    void Set(float a){
        this->a = a;
    }
};

class Rectangle: public CSquare{
private:
    float b;
public:
    Rectangle(): CSquare(){
        b = 0;
    }
    Rectangle(float a, float b): CSquare(a){
        this->b = b;
    }
    float getArea(){
        return a * b;
    }
    void Set(int aa, int bb){
        CSquare::Set(aa);
        b = bb;
    }
};

int main(){
    Rectangle A(5,6);
    A.Set(5,7);
    cout << A.getArea() << endl;
    return 0;
}