#include <iostream>
using namespace std;

class parent{
public:
    parent(){
        cout << "parent" << endl;
    }
    parent(int a){
        cout << "parent(int)" << endl;
    }
    ~parent(){
        cout << "~parent" << endl;
    }
};

class child: public parent{
public:
    child(){
        cout << "child" << endl;
    }
    ~child(){
        cout << "~child" << endl;
    }
};

int main(){
    child A;
    
    return 0;
}