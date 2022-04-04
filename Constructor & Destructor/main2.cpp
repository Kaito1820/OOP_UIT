#include <iostream>
using namespace std;

class Point{
public:
    int x;
    int y;
};

class Segment{
    Point A, B;
public:
    Segment(){
        cout << "1111" << endl;
    }
    ~Segment(){
        cout << "2222" << endl;
    }

};

int main(){
    {
        Segment a;
    }
    cout << "3333";
}