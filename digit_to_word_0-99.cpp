#include <iostream>
using namespace std;


void displayWordforNum(){
    int num;
    do
    {
        cout<<"Enter any number between 0-99: ";
        cin>>num;
        if (num < 0 || num > 99)
            {
                cout<<"\ninvalid input, number should be between 0-99\n";
            }
    } while (num < 0 || num > 99);
    int tens = num/10;
    int ones = num % 10;
    if (num<10)
    {
        switch (ones)
        {
        case 1:cout<<"Zero";break;
        case 2:cout<<"one";break;
        case 3:cout<<"two";break;
        case 4:cout<<"three";break;
        case 5:cout<<"four";break;
        case 6:cout<<"five";break;
        case 7:cout<<"six";break;
        case 8:cout<<"seven"; break;
        case 9:cout<<"eight"; break;
        case 10: cout<<"nine";break;    
        }
           
        
      }else if (num>=10 && num<=20)
        {
          switch(num) { 
            case 10: cout << "Ten"; break; 
            case 11: cout << "Eleven"; break; 
            case 12: cout << "Twelve"; break; 
            case 13: cout << "Thirteen"; break; 
            case 14: cout << "Fourteen"; break; 
            case 15: cout << "Fifteen"; break; 
            case 16: cout << "Sixteen"; break; 
            case 17: cout << "Seventeen"; break; 
            case 18: cout << "Eighteen"; break; 
            case 19: cout << "Nineteen"; break;
          }
        }else{
            switch (tens)
            {
                case 2: cout<<"Twenty ";break;
                case 3: cout<<"Thirty ";break;
                case 4: cout<<"Fourty ";break;
                case 5: cout<<"fifty ";break;
                case 6: cout<<"sixty ";break;
                case 7: cout<<"seventy ";break;
                case 8: cout<<"eighty ";break;
                case 9: cout<<"ninety ";break;
            }
            switch (ones)
            {
                case 0: break; //because on tens place the 0 is not pronunced it's in tens itself
                case 1:cout<<"one";break;
                case 2:cout<<"two";break;
                case 3:cout<<"three";break;
                case 4:cout<<"four";break;
                case 5:cout<<"five";break;
                case 6:cout<<"six";break;
                case 7:cout<<"seven";break;
                case 8:cout<<"eight";break;
                case 9:cout<<"nine";break;
            }
         }
}
int main(){
     
    int choice;
    while (true)
    {
        cout<<"\nEnter 1 to check word for number - 2 to exit: ";
        cin>>choice; 
        switch (choice)
        {
        case 1:
            displayWordforNum();
            break;
        case 2:
            cout<<"Goodbyee.... ";
            exit(1);
        default:
            cout<<"invalid choice";
            break;
        }
    }
     
}    