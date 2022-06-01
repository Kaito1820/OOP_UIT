#include <iostream>
using namespace std;

class Rectangle{
    float a, b;
public:
    Rectangle(){
        a = b = 0;
    }
    Rectangle(int aa, int bb){
        a = aa;
        b = bb;
    }
    float getArea(){
        return a*b;
    }
    void Set(float aa, float bb){
         a = aa;
         b = bb;
    }
};
class  Square: public Rectangle{
public:
    Square(float l): Rectangle(l,l){

    }
    void Set(float l){
        Rectangle::Set(l,l);
    }
};
int main(){
    Square A(5);
    cout << A.getArea() << endl;
    A.Set(8);
    cout << A.getArea() << endl;
    return 0;
}