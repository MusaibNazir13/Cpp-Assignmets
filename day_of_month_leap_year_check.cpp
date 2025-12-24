#include <iostream>
using namespace std;
//test version
bool checkLeap(int year){
    // If the year is divible by 4 not by 100 then it's a leap and if the year is divisible by 100, then check the exception if the year is divisible by 400 then it's a leap
    //v2 this line will return true or false
    return ((year%4==0 && year%100!=0) || (year%100==0 && year%400==0));
}

int main(){
    int year;
    int month;
    char choice;
    
        do{
            cout<<"\n\n(To check the days in month and if the year is leap or not)\nEnter the Month Number & Year: ";
            cin>>month>>year;
            switch (month)
            {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                cout<<"\nMonth no. "<<month<<" has 31 days in total";
                cout<<"\nThe year "<<year<<(checkLeap(year)?" is a leap year":" is not a leap year");
                break;
            case 2:
                if(checkLeap(year)){
                    cout<<"\nThe "<<year<<" is leap year so feb month will have 29 days"; 
                }else{
                    cout<<"\nThe "<<year<<" is not leap so feb month will have 28 days";
                }
                break;
            case 4: case 6: case 9: case 11:
                cout<<"\nMonth no. "<<month<<" has 30 days";
                cout<<"\nThe year "<<year<< (checkLeap(year)?" is a leap year":" is not a leap year");
                break;    
            default:
                cout<<"\nThe month number you entered is not valid, enter 1-12 only";
                break;
            }
            cout<<"\n\nDo You want to check again, enter Y or Z(or other letter you like): ";
            cin>>choice;
            if (choice!='y'){exit(1);}
            
            
        }while(choice=='y' || choice=='Y');
       
            
}