#include<iostream>
using namespace std;
class aaa
{

};
class bbb:public aaa
{

};

int main()
{
aaa *a;
a=new bbb; //the line get compiled
/*
The base class pointer can store the derrived class address
but vice versa, derrived class pointer cannot store the base class address
*/
bbb *b;
b=new aaa; // line not get complied
return 0;
}

/*
In case of inheritence, Base class pointer is capable of storing address of an object created from its derrived class but vice versa is not possible.


*/
