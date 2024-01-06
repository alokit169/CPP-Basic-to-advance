#include<iostream>
using namespace std;
class Bulb
{
int wattage;
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
cout<<"Parameterized constructor got invoked\n";
this->wattage=wattage;
}
Bulb(const Bulb &v)
{
cout<<"Copy constructor got invoked"<<endl;
this->wattage=v.wattage;
}
/*
Bulb & operator=(int wattage)
{
cout<<"operator = with (int) parameterized got executed"<<endl;
this->wattage=wattage;
return *this;
}
*/
Bulb & operator=(const Bulb &other)
{
cout<<"Operator = got invoked\n";
this->wattage=other.wattage;
return *this;
}
};
int main()
{
Bulb k;
k=Bulb();
k=90;
return 0;
}