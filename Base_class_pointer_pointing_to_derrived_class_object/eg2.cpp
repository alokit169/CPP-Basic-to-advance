#include<iostream>
using namespace std;
class aaa
{

};
class bbb
{

};
int main()
{
aaa *a;
a=new bbb; // now code not get compiled
bbb *b;
b=new aaa;// code not get compiled
return 0;
}
