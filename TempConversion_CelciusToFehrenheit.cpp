#include <iostream>
using namespace std;

class Temperature{
public:    
    double celTemp;
    Temperature(double t){
        celTemp=t;
    }
    void toFeh(){
        cout<<"Given Temp. in Celcius: "<<celTemp<<endl;
        cout<<"After Conversion to Fehrenheit: "<<(celTemp*9/5)+32<<endl;
    }

   
};

 int main(){
    Temperature celc(37.2);
        celc.toFeh();

    }