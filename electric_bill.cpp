#include <iostream>
using namespace std;

int main(){
    int units;
    double bAmount;
    cout<<"Enter the units consumed this month: ";
    cin>>units;
    cout<<endl;
    if(units<=100){
        cout<<"Your bill will be calculated at 2.5 Rs per unit"<<endl;
        bAmount = units * 2.5;
    }else if(units>=100 && units<=200){
        bAmount = 100 * 2.5;
        cout<<"1st Hundred bill amount at Rs 2.5/unit= "<<bAmount<<endl;
        bAmount += (units - 100)*3.5;
        cout<<"After 1st Hundred Upto 200 will be at Rs 3.5/unit "<<units - 100<<" * 3.5 = "<<(units-100)*3.5<<endl;
    }else if(units > 200){
        bAmount = 100 * 2.5;
        cout<<"1st Hundred bill amount at Rs 2.5/unit= "<<bAmount<<endl;
        bAmount += 100*3.5;
        cout<<"2nd Hundred bill amount at Rs 3.5/unit= "<<100*3.5<<endl;
        bAmount += (units - 200) * 4.0;
        cout<<"After 200 will be at Rs 4.0/unit "<<units - 200<<" * 4.0 = "<<(units-200)*4.0<<endl;
    }
        cout<<"Your this months total charges are: "<<bAmount<<endl;
}