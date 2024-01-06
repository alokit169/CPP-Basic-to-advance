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
//some members
};
class ccc:public bbb
{
void sam()
{
y=20; //y is protected member of ccc,and hence as good as public member for ccc
}
};
class ddd:public ccc
{
public:
void joy()
{
y=30; //y is protected member of ddd,and hence as good as public member for ddd
}
};
class eee:public ddd
{
public:
void tom()
{
y=20;
cout<<endl<<y<<endl;
}
};
class fff:private eee
{
public:
void tim()
{
y=400;
cout<<y;
}
};

int main()
{
aaa a;
bbb b;
a.y=10;
//a.x=30;
//b.y=40;
fff f;
f.tim();
eee e;
e.tom();

return 0;
}