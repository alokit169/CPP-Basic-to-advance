/*
In case of inheritence a base class pointer is capable of storing address of an object
*/

#include<iostream>
using namespace std;
class aaa
{
public:
virtual void sam()
{
cout<<"base sam\n";
}
 void tom()
{
cout<<"Base tom\n";
}
};
class bbb:public aaa
{
public:
void sam()
{
cout<<"Derrived Sam\n";
}
void tom()
{
cout<<"Derrived Tom\n";
}
};
int main()
{
aaa *a;
a=new bbb;
a->sam();
a->tom();
return 0;
}