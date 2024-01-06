#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
Bulb()
{
cout<<"Default Constructor get invoked"<<endl;
w=0;
}
Bulb(int e)
{
cout<<"Parameterized constructor get invoked"<<endl;
w=e;
}
Bulb(const Bulb &other)
{
cout<<"Copy constructor got invoked"<<endl;
cout<<w;
w=other.w;
cout<<other.w<<endl;
}
~Bulb()
{
cout<<"Destructor called"<<endl;
}
/*
Bulb & operator=(const Bulb &other)
{
cout<<"Operator = with const Bulb and got invoked"<<endl;
this->w=other.w;
cout<<w<<endl;
return *this;
}
*/
void setWattage(int e)
{
w=e;
}
int getWattage()
{
return w;
}
};
ostream & operator<<(ostream &o,Bulb &v)
{
o<<v.getWattage();
return o;
}
int main()
{
Bulb g;
cout<<"11111111"<<endl;
g=100;
cout<<g<<endl;
cout<<"222222222"<<endl;
cout<<"Wattage is : "<<g<<endl;
return 0;
}
