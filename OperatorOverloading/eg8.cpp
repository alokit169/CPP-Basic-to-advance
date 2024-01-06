#include<iostream>
using namespace std;
class Bulb
{
int wattage;
int price;
public:
void setWattage(int wattage)
{
this->wattage=wattage;
}
int getWattage()
{
return this->wattage;
}
Bulb()
{
cout<<"Default Constructor"<<endl;
}
Bulb(const Bulb &v)
{
cout<<"copy constructor invoked"<<endl;
this->wattage=v.wattage;
}
Bulb (int wattage)
{
cout<<"Parameterized Constructor"<<endl;
this->wattage=wattage;
}
};
int main()
{
Bulb k;
k=60;
return 0;
}