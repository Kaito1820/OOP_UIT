#include "Cattle.cpp"

class Sheep: public Cattle{
public:
    void luongSua(int b, int n){
        cout << "Cuu: " <<  5 * n * b << endl; 
    }
};