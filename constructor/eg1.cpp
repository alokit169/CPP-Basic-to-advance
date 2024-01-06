//Copy Constrctor EG-1

#include<iostream>
using namespace std;
class Bulb
{
int w;
public:
Bulb()
{
w=0;
}
Bulb(int e)
{
w=e;
}
Bulb(const Bulb &v)
{
w=v.w;
}
void setWattage(int e)
{
if(w>0 && w<=260) w=e;
else w=0;
}
int getWattage()
{
return w;
}
};
int main()
{
Bulb g,t(60),m(t);
cout<<g.getWattage()<<endl;
cout<<t.getWattage()<<endl;
cout<<m.getWattage();
return 0;
}
