/*Problem 
int x;
toy t1;
int z=x+t1 // How to add int and toy type
*/
/*
#include<iostream>
using namespace std;
class Toy
{
int price;
public:
void setPrice(int price);
int getPrice();
};
void Toy::setPrice(int price)
{
this->price=price;
}
int Toy::getPrice()
{
return this->price;
}
int operator+(int a,Toy &b)
{
return a+b.getPrice();
}
int main()
{
Toy t1;
t1.setPrice(100);
int x=50;
int z;
z=x+t1;
cout<<z<<endl;
return 0;
}
*/


#include<iostream>
using namespace std;
class Toy
{
int price;
public:
void setPrice(int price);
int getPrice();
operator int()
{
return this->price;
}
};
void Toy::setPrice(int price)
{
this->price=price;
}
int Toy::getPrice()
{
return this->price;
}
int main()
{
Toy t1;
t1.setPrice(1000);
int x=50;
int z;
z=x+t1;
cout<<z<<endl;
return 0;
}