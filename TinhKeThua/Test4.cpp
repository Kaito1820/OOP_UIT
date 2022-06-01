#include <iostream>
using namespace std;

class Elipse{
private:
    float ra, rb;
public:
    Elipse(){
        ra = 0;
        rb = 0;
    }

    Elipse(float rra, float rrb){
        ra = rra;
        rb = rrb;
    }

    void Set(float rra, float rrb){
        ra = rra;
        rb = rrb;
    }

    float getArea(){
        return 3.14 * ra * rb;
    }

};

class Circle: public Elipse{
public:
    Circle(): Elipse(){

    }
    Circle(float r):Elipse(r, r){

    }

    void Set(float r){
        Elipse::Set(r ,r);
    }

    float getArea(){
        return Elipse::getArea();
    }

};

int main(){
    Circle a(1);
    cout << a.getArea() << endl;
    return 0;
}