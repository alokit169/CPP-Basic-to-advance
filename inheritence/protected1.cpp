/*
So in case of inheritence, derived inherits all the memebers of the base class, but the methods of the derrived class cannot access the private member of the base class
*/
#include<iostream>
using namespace std;
class aaa
{
private:
int x;
protected:
int y;
public:
int z;
};
class bbb
{
public:
void sam()
{
aaa a;
a.x=10; //X is private
a.y=20;// since bbb is not derived from aaa, so y is also good as private
a.z=30; // z is pubic member of class aaa
}
};
class ccc:public aaa
{
public:
void joy()
{
x=10; // private member of aaa
y=20; //since ccc is inheritencing aaa ,y which is protected is as good as public for bbb
z=30; //z is public member of aaa
}
};
int main()
{
aaa a;
a.x=10;
a.y=20;
a.z=30;
return 0;
}
