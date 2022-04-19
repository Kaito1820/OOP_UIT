#include <iostream>
#include <cstdlib>
#include "Clock.h"
using namespace std;

Clock::Clock(){
    s = 0;
    m = 0;
    h = 0;
    sumS = 0;
}

void Clock::Set(){
    cin >> h >> m >> s;
}

void Clock::ChuanHoa(){
    sumS = h * 3600 + m * 60 + s; 
}

void Clock::ask1(){
    sumS++;
}

void Clock::ask2(){
    sumS--;
    if(sumS < 0) ChuanHoaAm();
}

void Clock::ask3(int x){
    sumS += x;
    if(sumS < 0) ChuanHoaAm();
}

void Clock::ask4(int x){
    sumS -= x;
    if(sumS < 0) ChuanHoaAm();
}

void Clock::ChuanHoaAm(){
    if(sumS<0) sumS = -sumS;
    if(sumS > 86400) 
        sumS = ((sumS/86400)) * 86400 - sumS;
    else{
        sumS = 86400 - sumS;
    }
}

void Clock::Print(){
    if(sumS >= 3600){
		h = sumS / 3600;
		sumS %= 3600;
		if(h >= 24) h %= 24;
    }
    if (sumS >= 60){
        m = sumS / 60;
	    sumS %= 60;
        s = sumS;
    }
    else{
        m = 0;
        s = sumS;
    }
    
    cout << h << "h " << m << "p " << s << "s";
}

