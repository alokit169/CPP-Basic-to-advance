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
Bulb(int wattage)
{
cout<<"parameter Constructor"<<endl;
this->wattage=wattage;
}
Bulb(const Bulb &v)
{
cout<<"Copy constructor"<<endl;
this->wattage=v.wattage;
}
Bulb & operator=(Bulb &other)
{
cout<<"Other = operator get invoked"<<endl;
this->wattage=other.wattage;
return *this;
}

};
int main()
{
Bulb k=100;
Bulb m=200;
k=m;
cout<<k.getWattage();
return 0;
}