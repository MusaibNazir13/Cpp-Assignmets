#include <iostream>
using namespace std;

class Interest{
public:    
    float principal,rate,time;

    Interest(float p,float r , float t){
        principal = p;
        rate = r;
        time = t;
    }

    float calcSint(){
        return (principal*rate*time)/100.0f;
    }    
};

int main(){
    Interest i(10000, 5, 2);
    cout<<"Simple Interest for: "<<i.principal<<" @ "<<i.rate<<", for "<<i.time<<" years. Would be: "<<i.calcSint()<<endl;
}