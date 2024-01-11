//operator Overloading for (++) prefix and postfix

#include<iostream>
using namespace std;
class Toy
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
void operator++()//prefix
{
 this->price=this->price+20;
}
void operator++(int) // postfix
{
this->price=this->price+10;
}
void operator+=(int x)
{
this->price=this->price+x;
}
};
int main()
{
Toy t1,t2;
t1.setPrice(100);
t1+=300;
t2.setPrice(200);
t1++;
++t2;
cout<<t1.getPrice()<<endl;
cout<<t2.getPrice()<<endl;
return 0;
}
/*
int main()
{
Toy t1;
Toy t2;
int a,b;
t1.setPrice(100);
t2.setPrice(200);
a=t1++;
b=++t2;
cout<<t1.getPrice()<<endl;
cout<<t2.getPrice()<<endl;
cout<<a<<endl;
cout<<b<<endl;
return 0;
}
*/
/*
int main()
{
Toy t1;
Toy t2;
t1.setPrice(100);
t2.setPrice(200);
t1++;
++t2;
cout<<t1.getPrice()<<endl;
cout<<t2.getPrice()<<endl;
}
*/