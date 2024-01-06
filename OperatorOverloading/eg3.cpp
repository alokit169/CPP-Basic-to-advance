#include<stdio.h>
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
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
int operator<(Bulb &v)
{
return this->price<v.price;
}
};
int main()
{
Bulb g,t;
g.setPrice(1000);
g.setWattage(49);
t.setPrice(200);
t.setWattage(34);
if(g<t) printf("Price of g is less than t\n");
else printf("Price of g is not less than t\n");

return 0;
}