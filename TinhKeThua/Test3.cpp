#include <iostream>
using namespace std;

class Circle{
protected:
    float ra;
public:
    Circle(){
        ra = 0;
    }
    Circle(float rr){
        ra = rr;
    }

    void Set(float rr) {
        ra = rr;
    }

    float getArea(){
        return 3.14 * ra * ra;
    }
};

class Eclipse: public Circle{
    float rb;
public:
    Eclipse():Circle(){

    }
    Eclipse(float ra, float rb): Circle(ra){
        this->rb = rb;
    }

    void Set(float rra, float rrb){
        Circle::Set(rra);
        rb = rrb;
    }
    float getArea(){
        return 3.14 * ra * rb;
    }
};

int main(){
    return 0;
}