#include<iostream>
using namespace std;

class BMI {
public:
    struct BMI_calc
    {
        float bmi;
        string status;
    };    
private:    
    float weight , height;

    BMI_calc one;
    string getStatus(){
        if(one.bmi<18.5){
            return "Underweight";
        }else if (one.bmi>=18.5 && one.bmi<=24.9)
        {
            return "Normal/Healthy";
        }else if(one.bmi>24.9){
            return "Overweight";
        }   
    }

    BMI_calc calBmi(){
        one.bmi=weight/(height*height);
        return {one.bmi,getStatus()};
    }
public:
    BMI(float w,float h):weight(w),height(h){}
    BMI(){height=weight=0;}
    float getWeight(){return weight;}
    void setWeight(float w){
        weight=w;
    }
    float getHeight(){return height;}
    void setHeight(float h){
        height = h;
    }
    BMI_calc getBmi(){
        return calBmi();
    }    
};

int main(){
    BMI obj(68.5,1.78f);
    // obj.setHeight(1.778f);//in meters
    // obj.setWeight(68.5);// in kgs
    
    BMI::BMI_calc res = obj.getBmi();

    cout << "Height: " << obj.getHeight() << "  Weight: " << obj.getWeight() << endl;
    cout << "BMI: " << res.bmi << "  Status: " << res.status << endl;

}