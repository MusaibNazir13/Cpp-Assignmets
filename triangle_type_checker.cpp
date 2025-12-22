// This program is to input three sides of a triangle and
// Check if it forms a valid triangle 
//by also determining if the triangle is possible from the sides, entered by user
//if a,b,c is a triangle : then a+b>c && a+c>b && b+c=a all should be true then the triangle is possible
// Determining whether it is Equilateral, Isosceles, or Scalene
// Also checking whether it is a right-angled triangle for except Scalene as in this type no sides and angles are equal.
// to determine the angles from the given sides we need to use the cosine formula that is used to determine the degree of an angle opposite to the current side
// For a triangle with sides a,b,c opposite angles say A,B,C : cos(A) = (b^2 + c^2 - a^2)/2bc , similarly for other angles, we subtract the side that we need opp deg of by other two available sides and divide the value by the product of other two adjacent sides 

#include <iostream>
using namespace std;

bool tri_poss;

bool checkTriPossible(int a, int b, int c){
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

int main(){
    int a,b,c;
    cout<<"Enter the three sides of the triangle: ";
    cin>>a>>b>>c;

    //This fn will check if the triangle is possible from the user inputted sides
    tri_poss=checkTriPossible(a,b,c);
    cout<<tri_poss<<endl;
}