#include<iostream>
using namespace std;
class aaa
{
private:
int x;
public:
int y;
};
class bbb:protected aaa
{
public:	
};
class ccc: public bbb
{
public:
void sam()
{
y=20;
}
};
class ddd: public ccc
{
public: 
void joy()
{
y=30;
}
};
class eee:public ddd
{
public: 
void tom()
{
y=20;
}
};
class fff:private eee
{
public:
void tim()
{
y=200;
}
};
class ggg:public fff
{
public:
void sunny()
{
y=340;
}
};
int main()
{
eee b;
b.x=10;
b.y=30;
return 0;
}