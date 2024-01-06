#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
}
void tom()
{
cout<<"Aaa tom"<<endl;
}
};
class bbb:public aaa
{
public:
void tom()
{
cout<<"bbb tom"<<endl;
}
};
int main()
{
aaa *p1;
p1=new aaa;
p1->sam();
p1->tom(); //not compiled
bbb *p2;
p2=new bbb;
p2->sam(); 
p2->tom();
aaa *p3;
p3=new bbb;
p3->sam();
p3->tom(); // not compiled
bbb *p4;
//p4=new aaa; //not compiled
return 0;
}