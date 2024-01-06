#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"What ever"<<endl;
}
};
class bbb:virtual public aaa//class bbb:public aaa
{
public:
void tom()
{
cout<<"HELLO"<<endl;
}
};
class ccc:virtual public aaa //class ccc:public aaa
{
public:
void joy()
{
cout<<"This is great"<<endl;
}
};
class ddd:public bbb,public ccc // now ddd is receiving multiple copy of aaa, but after using virtual keyword single copy of aaa is reached to ddd
{
public:
void bobby()
{
cout<<"Fantastic"<<endl;
}
};
int main()
{
ddd d;
d.sam();// sam is ambiguoes  because of inheritence in multiple class so to remove ambiguity we use virtual keyword
return 0;
}

/*
Now, Let us understand why new programming language does not support multiple inheritence(java,dot.net)

Because Virtual inheritence is not a full proof solution of multiple inheritence

if we override the sam on path D then then again there is ambiguity that which part is choosen either of B,C or D path.
*/

	