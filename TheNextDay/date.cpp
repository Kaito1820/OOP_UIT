#include <iostream>
#include "date.h"
using namespace std;

void Date::set(int d, int m, int y){
    int ngayCuoiThang2 = 28;
    if(y < 0){
        cout << "ERROR";
        k = 0;
        return;
    }
    else year = y;
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) ngayCuoiThang2 = 29;
    if(m < 1 || m > 12 ) {
        cout<< "ERROR";
        k = 0;
        return;
    } else month = m;

    switch(m){
        case 2:
            if(d < 1 || d > ngayCuoiThang2) {
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


}

void Date::add(int d, int m, int y){
    switch(d){
        case 28:
            if(m == 2 && ((y % 400 != 0) || (year % 4 != 0 && year % 100 == 0)){
                date = 1;
                month = 3;
            } else date++;
            break;
        case 29:
            if(m == 2 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))){
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
