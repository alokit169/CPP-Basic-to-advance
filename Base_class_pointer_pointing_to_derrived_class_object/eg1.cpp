// The Pointer which is declare outside the class

/*
AT the time of birth of pointer , the pointer identify all the public members of the class.
after that the pointer is not increase the identification of the members neither decrease it till the end of the program.
*/

#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
int e;
void setWattage(int e)
{
w=e;
}
int getWattage()
{
return w;
}
};
int main()
{
Bulb *p;
p=new Bulb;
p->e=60;
cout<<p->e<<endl;
p->setWattage(25);
cout<<p->getWattage();
return 0;
}