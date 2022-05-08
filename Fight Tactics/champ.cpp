#pragma once
#include <iostream>
#include <string>
using namespace std;

class Champ{
private:
    string name;
    int id;
    int damage;
public:
    Champ(int damage){
        this-> damage = damage;
    }

    int getDamage(){
        return damage;
    }
    
    virtual void print(int m){
        
    }
};