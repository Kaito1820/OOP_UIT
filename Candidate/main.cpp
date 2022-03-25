#include <iostream>
#include <string>
#include "candidate.cpp"
using namespace std;

int main(){
    bool check = 0;
    int n;
    cin >> n;
    Candidate* sv = new Candidate[n];
    
    for(int i = 0; i < n; i++){
        sv[i].setSTT(i+1);
        sv[i].input();
    }

    for(int i = 0; i < n; i++){
        sv[i].output();
        if(sv[i].getFlag()) check = 1;
    }
    if(!check) cout << "Khong co thi sinh co tong diem lon hon 15" << endl;
    return 0;
}