#include <iostream>
using namespace std;

bool checkLeap(int year,int month=0){
    // If the year is divible by 4 not by 100 then it's a leap and if the year is divisible by 100, then check the exception if the year is divisible by 400 then it's a leap
    if ((year%4==0 && year%100!=0) || (year%100==0 && year%400==0)) 
    {
        if(month==2){return true;}else{ cout<<"\nAnd the year "<<year<<" is a leap year";}
    }else{
        if(month==2){return false;}else{cout<<"\nAnd the year "<<year<<" is not a leap year";}
    }
}

int main(){
    int year;
    int month;

    cout<<"\n(To check the days in month and if the year is leap or not)\nEnter the Month Number & Year: ";
    cin>>month>>year;

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout<<"\nMonth no. "<<month<<" has 31 days in total";
        checkLeap(year);
        break;
    case 2:
        if(checkLeap(year,month)){
            cout<<"\nThe "<<year<<" is leap year so feb month will have 29 days"; 
        }else{
            cout<<"\nThe "<<year<<" is not leap so feb month will have 28 days";
        }
        break;
    case 4: case 6: case 9: case 11:
        cout<<"\nMonth no. "<<month<<" has 30 days";
        checkLeap(year);
        break;    
    default:
        cout<<"\nThe month number you entered is not valid, enter 1-12 only";
        break;
    }
}