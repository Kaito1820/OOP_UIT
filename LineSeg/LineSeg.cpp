#include <iostream>
#include <cmath>
using namespace std;

class  Point{
    int x;
    int y;
public:
    Point(){
        cout << "point()" << endl;
        x = 0;
        y = 0;
    };
    Point(int xx, int yy){
        cout << "point(x,y)" << endl;
        x = xx;
        y = yy;
    }
    friend float distance(Point A, Point B);
    friend class CLineSeg;
};

inline float sqr(float A) {return A*A;}
float distance(Point A, Point B){
    return sqrt(sqr(A.x - B.x) + sqr(A.y - B.y));
}

class CLineSeg{
    Point A, B;
public:
    CLineSeg(float xA, float yA, float xB, float yB):A(xA, yA), B(xB, yB)
    { // cu phap nhanh de gan xA, yA, xB, yB
        cout << "clineseg()" << endl;
    }

    float length(){
        return sqrt(sqr(A.x - B.x) + sqr(A.y - B.y));
    }

    void f(){
        A.x++;
    }
};


int main(){
    // CLineSeg AB(2,3,4,5); 
    Point A(1,2) , B(6, 7);
    cout << distance(A,B) << endl;
    return 0;
}