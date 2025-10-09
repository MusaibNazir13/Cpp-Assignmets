#include <iostream>
using namespace std;

int main(){
    int num;
     
    while (true)
    {
         cout<<"Enter an integer [0 to exit the program]: ";
         cin>>num;

         if (num==0){
           cout<<"Entered number is 0. Which is on the center of numberline.\nYou just hit exit. Bye!"<<endl;
           break;
        }
        if(num%2==0){
            cout<< (num<0 ?"The num is negative even number":"The num is positive even number")<<endl;
        }else{
            cout<< (num<0 ?"The num is negative odd number":"The num is positive odd number")<<endl;
        }
    
    }
    return 0;
}