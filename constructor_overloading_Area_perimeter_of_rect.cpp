#include <iostream>
using namespace std;

class Rectangle{
public:
    double length , width;
    
    Rectangle(double l,double w)
        : length(l),width(w){}
   
    Rectangle(double l){
        length = l;
      
        width = length;
        
    }

    void showPeri(){
        cout<<"The Perimeter of Rectangle with length "<<length<<" and the width "<<width<<" is: "<<2*(length+width)<<endl;
    }
    void showArea(){
        cout<<"The Area of Rectangle with length "<<length<<" and the width "<<width<<" is: "<<length*width<<endl;
    }
};

int main(){
        Rectangle rect(2,4);
        Rectangle sqr(2);
        

        rect.showArea();
        sqr.showArea();

        rect.showPeri();
        sqr.showPeri();

}