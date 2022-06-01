#include "Cattle.cpp"

class Goat: public Cattle{
public:
    void luongSua(int c, int n){
        cout << "De: " <<  8 * n * c << '\n'; 
    }
};