#include<iostream>
using namespace std;
class fridge;
class fan;
class TV
{
int price;
public:
TV()
{
price=0;
}
TV(int price)
{
this->price=price;
}
friend int operator+(TV &t1, fridge &f1);
};
class fridge
{
int price;
public:
fridge()
{
price=0;
}
fridge(int price)
{
this->price=price;
}
friend int operator+(TV &t1, fridge &f1);

};
class fan
{
int price;
public:
fan()
{
this->price=0;
}
fan(int price)
{
this->price=price;
}
friend int operator+(int sum,fan &f2);
};

int operator+(int sum,fan &f2)
{
int total=sum+f2.price;
return total;
}

int operator+(TV &t1, fridge &f1)
{
int total=t1.price+f1.price;
return total;
}


int main()
{
TV t1(10000);
fridge f1(20000);
int sum=t1+f1;
cout<<sum;

fan k(5000);
sum=t1+f1+k;
cout<<endl<<sum;

return 0;
}