#include<iostream>
using namespace std;
class SmartLight
{
    public:
    string brand;
    int brightness;
    bool isOn;
    SmartLight();
    SmartLight(string,int,bool);
    void turnoff();
    void turnon();
    void increasebrightness();
    void decreasebrightness();
    void Displaystatus();
    ~SmartLight(){cout<<"\n Object Destroyed";}
};
SmartLight::SmartLight()
{
    brand="Unknown";
    isOn=false;
    brightness=50;
}
SmartLight::SmartLight(string b,int bts,bool tf)
{
    brand=b;
    brightness=bts;
    isOn=tf;
}
void SmartLight::turnon()
{
    isOn=true;
}
void SmartLight::turnoff()
{
    isOn=false;
}
void SmartLight::increasebrightness()
{
    if(brightness+10>100)
    brightness=100;
    else
    brightness+=10;
}
void SmartLight::decreasebrightness()
{
    if(brightness-10<0)
    brightness=0;
    else
    brightness-=10;
}
void SmartLight::Displaystatus()
{
    cout<<"\n Brand:"<<brand;
    cout<<"\n Brightness:"<<brightness;
    if(isOn==true)
    cout<<"\n Lights ON";
    else
    cout<<"\n Lights OFF";
}
int main()
{
    SmartLight s1("phillips",5,true);
    s1.decreasebrightness();
    s1.turnoff();
    s1.Displaystatus();
    return 0;
}