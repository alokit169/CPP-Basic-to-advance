/*
To hide the internals of an object from outside world so that object stays in valid state.

*/
// In this example there are three members of class i.e one property w and 2 methods setWattage,getWattage()
#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e)
{
/*Applaying validation for wattage of bulb*/
if(e>=0 && e<=240) w=e;
else w=0;
}
int getWattage()
{
return w;
}
};
int main()
{
Bulb g;

//g.w=100;// we can not access w directly as w is a private member of class Bulb

//g.setWattage(100);
g.setWattage(-30);
/**/
cout<<g.getWattage();
}