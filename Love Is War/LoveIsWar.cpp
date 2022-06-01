#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int n;
static float timeBestFriend = 0;
static float timeBoyFriend = 0;
static float timeOtherBoy = 0;

class Friend{
public:
    float tg = 0;
    string name;
    int age;
    virtual void input(){
        cin >> name;
        cin >> age;
    }

    virtual float getTg() = 0;
    virtual void output(){
        cout << "Ten: " << name << ", tuoi: " << age << ", ";
    }
};

class BestFriend: public Friend{
public:
    string phone;
    void input(){
        Friend::input();
        cin >> phone;
        timeBestFriend += 5;
        tg = 5;
    }

    float getTg(){
        return tg;
    }

    void output(){
        Friend::output();
        cout << "so dien thoai: " << phone << '\n';   
    }
};

class BoyFriend: public Friend{
public:
    int id = 2;
    int income;
    void input(){
        Friend::input();
        cin >> income;
        timeBoyFriend += 5*income/10000000.0;
        tg = 5*income/10000000.0;
    }
    
    float getTg(){
        return tg;
    }

    void output(){
        Friend::output();
        cout << "thu nhap: " << income << "d\n";   
    }
};

class OtherBoy: public Friend{
public:
    float attractiveness;
    string doThuHut;
    void input(){
        Friend::input();
        cin >> attractiveness;
        timeOtherBoy += attractiveness*20/n;
        tg = attractiveness*20/n;
        if(attractiveness >= 0.7-0.00001) doThuHut = "cao";
        else if(attractiveness >= 0.4-0.00001) doThuHut = "trung binh";
        else doThuHut = "thap";
    }

    float getTg(){
        return tg;
    }

    void output(){
        Friend::output();
        cout << "do thu hut: " << doThuHut << '\n';   
    }    
};


int main(){
    cin >> n;
    int a, b, c;
    a = b = c = 0; 
    Friend** fr = new Friend*[n];
    for(int i = 0; i < n; i++){
        int type;
        cin >> type;
        if(type == 1){
            fr[i] = new BestFriend;
            a++;
        }
        if(type == 2){ 
            fr[i] = new BoyFriend;
            b++;
        }
        if(type == 3){ 
            fr[i] = new OtherBoy;
            c++;
        }
        fr[i]->input();
    }
    
    cout << "Thong ke:" << '\n';
    if(a) cout << "-Thoi gian cho ban than: " << timeBestFriend << " h" << '\n';
    if(b) cout << "-Thoi gian cho ban trai: " << timeBoyFriend << " h" << '\n';
    if(c) cout << "-Thoi gian cho ban trai khac: " << timeOtherBoy << " h" << '\n';
    cout << "Nguoi ban quan trong nhat:" << '\n';
    float maxTg = -1;
    for(int i = 0; i < n ; i++){
        if(maxTg < fr[i]->getTg()) maxTg  = fr[i]->getTg();
    }

    for(int i = 0 ; i < n; i++){
        if(maxTg == fr[i]->getTg()) fr[i]->output();
    }
    return 0;
}