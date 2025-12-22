// This program is to input three sides of a triangle and
// Check if it forms a valid triangle 
//by also determining if the triangle is possible from the sides, entered by user
//if a,b,c is a triangle : then a+b>c && a+c>b && b+c=a all should be true then the triangle is possible
// Determining whether it is Equilateral, Isosceles, or Scalene
// Also checking whether it is a right-angled triangle for except Scalene as in this type no sides and angles are equal.
// to determine the angles from the given sides we need to use the cosine formula that is used to determine the degree of an angle opposite to the current side
// For a triangle with sides a,b,c opposite angles say A,B,C : cos(A) = (b^2 + c^2 - a^2)/2bc , similarly for other angles, we subtract the side that we need opp deg of by other two available sides and divide the value by the product of other two adjacent sides 
//this code is wrote unprofessionally so don't copy my style, it's just for learning purpose
#include <iostream>
#include <cmath>

using namespace std;




class Triangle
{
private:
    float a , b, c;
    double A,B,C;
    bool chkFlag=false;

    void anglesFromSides(){
        //the below formula gives Cosine value 
        double a1 = (b*b+c*c-a*a)/(2.0*b*c);
        //acos gives us value in radians, and then we convert the radian into degrees from the formula (radian x 180 / PI)
        A = acos(a1) * 180 / M_PI;
        
        double b1 = (a*a+c*c-b*b)/(2.0*a*c);
        B = acos(b1) * 180 / M_PI;
        
        double c1 = (b*b+a*a-c*c)/(2.0*b*a);
        C = acos(c1) * 180 / M_PI;
        
    }
    void displayAngles(){
        if (chkFlag)
        {
            cout<<"Deg of Angle A Opposite to Side a: "<<A;
            cout<<endl;
            cout<<"Deg of Angle B Opposite to Side b: "<<B;
            cout<<endl;
            cout<<"Deg of Angle C Opposite to Side c: "<<C;
            cout<<endl;
        }else{
            checkAngles();
            chkFlag=true;
        }
        
        
    }
    bool checkTriPossible(){
    //this fn returns true if the triangle is possible and false if it is not
            if (a+b>c && a+c>b && b+c>a)
             {   
                return true;
            }else{
                return false;
        }
    
    // if (a+b>c)
    // {
    //     if (a+c>b)
    //     {
    //         if (b+c>a)
    //         {
    //             return true;
    //         }else{
    //             return false;
    //         }
            
    //     }
        
    // }
   
}
    void checkTriangleType(){
        
        if (possible())
        {
            if (a==b && b==c)
            {
                cout<<"The triangle is Equilateral with : \nSide a: "<<a<<" Side b: "<<b<<" Side c: "<<c<<endl;
                
            }else if (a==b || b==c || a==c)
            {   checkAngles();
                chkFlag=true;
                if (A==90 || B==90 || C==90)
                {
                    cout<<"This is Right Angled Isosceles TRIANLGE with following sides: \nSide a: "<<a<<" Side b: "<<b<<" Side c: "<<c<<endl;                    
                }else{
                    cout<<"This is an Isosceles TRIANLGE with : \nSide a: "<<a<<" Side b: "<<b<<" Side c: "<<c<<endl;                    
                }
                
            }
            if (a!=b && b!=c && a!=c)
            {   checkAngles();
                chkFlag=true;
                if (A==90 || B==90 || C==90)
                {
                    cout<<"This is Right Angled Scalene TRIANLGE with : \nSide a: "<<a<<" Side b: "<<b<<" Side c: "<<c<<endl;                  
                }else{
                    cout<<"This is a Scalene TRIANLGE with : \nSide a: "<<a<<" Side b: "<<b<<" Side c: "<<c<<endl;              
                }
            }
                      
            
        }else{
            cout<<"\nThe triangle is not possible";
        }
        
    }

 
public:
    Triangle(float x,float y, float z);
    bool possible() {return checkTriPossible();}
    void checkAngles(){ anglesFromSides(); }
    void checkType() { checkTriangleType(); }
    void showAngle() { displayAngles(); }
};

Triangle::Triangle(float x,float y,float z):a(x),b(y),c(z){}



int main(){
    float a,b,c;
    cout<<"Enter the three sides of the triangle: ";
    cin>>a>>b>>c;
    
    Triangle tr1(a,b,c);
    tr1.checkType();
    cout<<endl;
    tr1.showAngle();

}