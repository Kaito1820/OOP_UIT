#pragma

class Polygon{
private:
    int n;
    float *x = new float[n];
    float *y = new float[n];

public:
    void input();
    void output();
    float S1();
    float S2();
};