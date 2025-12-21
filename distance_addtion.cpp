#include <iostream>
#include <cmath>
using namespace std;

class Distance{
public:
    struct m_cms
    {
        int meters,centimeters;
    };
        
private:
    float mtrs,cms;   
    float sumDist(){
        float mfcm = cms/100;
        return mtrs+mfcm;
    } 
    m_cms one;
    m_cms sumDistAdv(){
        float distValue = sumDist();
        one.meters = (int)(distValue);
        one.centimeters = (int)round((distValue - one.meters) * 100);

        return {one.meters,one.centimeters};
    }
public:
    Distance(float m, float cm):mtrs(m),cms(cm){    }
    Distance(float m):mtrs(m){}
    Distance():mtrs(0),cms(0){}

    void setMtrs(int m){mtrs=m;}
    float getMtrs(){return mtrs;}
    void setCms(float c){cms=c;}
    float getCms(){return cms;}

    float getDistSum(){
        return sumDist();
    }
    m_cms getMcmsDist(){
        return sumDistAdv();
    }
};

int main(){
        

        Distance onee;
        
        onee.setCms(567);
        onee.setMtrs(45);

        Distance::m_cms MCM = onee.getMcmsDist();

        cout<<"Distance: "<<onee.getMtrs()<<" meters, "<<onee.getCms()<<" is given."<<endl;
        cout<<"Distance after Addition: "<<onee.getDistSum()<<" meters"<<endl;
        cout<<"Distance after Addition: "<<MCM.meters<<" meters "<<MCM.centimeters<<" cms"<<endl;
}