#include <iostream>
using namespace std;
class Int{
private:
    int i;
public:
    Int(){i=0;}
    Int(int val):i(val){}
    void add(Int val,Int val2){
        i=val.i+val2.i;
    }
    void display(){cout<<i<<endl;}
};

int main(){
    Int i1(2);
    Int i2(7);
    Int i3;
    i3.add(i1,i2);
    i3.display();
    return 0;
}