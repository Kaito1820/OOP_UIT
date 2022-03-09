#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Date{
private:
    int date, month, year;
    bool k = 1;
public:
    void set(int , int , int );
    void add(int , int , int );
    void output();
};

void Date::set(int d, int m, int y){
    if(m < 1 || m > 12 ) {
        cout<< "ERROR";
        k = 0;
        return;
    } else month = m;

    switch(m){
        case 2:
            if(d < 1 || d > 29) {
                cout << "ERROR";
                k = 0;
                return;
            }
            else date = d;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(d < 1 || d > 30){
                cout << "ERROR";
                k = 0;
            } 
            else date = d;
            break;

        default:
            if(d < 1 || d > 31) {
                cout << "ERROR";
                k = 0;
            }
            else date = d;
    }

    if(y < 0){
        cout << "ERROR";
        k = 0;
    }
    else year = y;
}

void Date::add(int d, int m, int y){
    switch(d){
        case 29:
            if(m == 2){
                date = 1;
                month = 3;
            } else date++;
            break;

        case 30:
            switch(m){
                case 4:
                case 6:
                case 9:
                case 11: 
                    {
                        date = 1;
                        month++;
                    }
                    break;
                default: date++;
            }
            break;

        case 31:
            date = 1;
            if(m == 12){
                month = 1;
                year++;
            } else month++;
            break;

        default: date++;
    }
}

void Date::output(){
    if(k) cout << date << '/' << month << '/' << year;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d, m, y;
    Date today;

    cin >> d >> m >> y;
    today.set(d, m, y);
    today.add(d, m, y);
    today.output();
    return 0;
}
