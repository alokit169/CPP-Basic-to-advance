//Example of Independent function

#include<iostream>
using namespace std;
class fridge;
class TV
{
int price;
public:
void setPrice(int price)
{
this->price=price;
}
friend int operator<(TV &a,fridge &b);
};
class fridge
{
int price;
public:
void setPrice(int price)
{
this->price=price;
}
friend int operator<(TV &a,fridge &b);
};
int operator<(TV &a,fridge &b) //independent function havin a 2 parameters of i.e alias fo t and f
{
return a.price<b.price;
}
int main()
{
TV t;
t.setPrice(400000);
fridge f;
f.setPrice(49999);
if(t<f) cout<<"TV is cheaper than fridge"<<endl;
else cout<<"Tv is not cheaper than fridge"<<endl;
return 0;
}