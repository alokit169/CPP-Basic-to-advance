#include<iostream>
#include<string.h>
using namespace std;
class SDcard
{
int capacity;
public:
void setCapacity(int e)
{
capacity=e;
}
int getCapacity()
{
return capacity;
}
};
class MobilePhone
{
char brandName[45];
SDcard sdcard;
int price;
public:
void setBrandName(const char *br)
{
strcpy(brandName,br);
}
void getBrandName(char *b)
{
strcpy(b,brandName);
}
void setPrice(int p)
{
price=p;
}
int getPrice()
{
return price;
}
void setSDcard(SDcard s)
{
sdcard=s;
}
SDcard getSDCard()
{
return sdcard;
}
};
int main()
{
MobilePhone m;
m.setBrandName("Nokia");
m.setPrice(1200);
SDcard ss;
ss.setCapacity(50);
m.setSDcard(ss);
char br[45];
m.getBrandName(br);
int pr;
pr=m.getPrice();
SDcard kk=m.getSDCard();
cout<<"Mobile Details"<<endl;
cout<<"Brand "<<br<<endl;
cout<<"Price: "<<pr<<endl;
cout<<"Capacity: "<<kk.getCapacity();
}