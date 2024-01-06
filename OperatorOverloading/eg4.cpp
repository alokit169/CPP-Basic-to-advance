#include<stdio.h>
class fridge;
class TV
{
int price;
public:
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
friend int operator<(TV &a,fridge &v);
};
class fridge
{
int price;
public:
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
friend int operator<(TV &a,fridge &v);
};

int operator<(TV &a,fridge &v)
{
return a.price<v.price;
}


int main()
{
TV t;
fridge f;
t.setPrice(1100);
f.setPrice(200);
if(t<f) printf("Price of t is less than f\n");
else printf("Price of t is not less than f \n");
return 0;
}