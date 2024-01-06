#include<iostream>
using namespace std;
class IntCollection
{
private:
int *x;
int size;
public:
IntCollection(int req)
{
if(req>0)
{
x=new int[req];
size=req;
}
else
{
x=NULL;
size=0;
}
}
IntCollection(const IntCollection &v)
{
if(v.size==0)
{
x=NULL;
size=0;
}
else
{
size=v.size;
x=new int[size];
for(int i=0; i<size; i++) x[i]=v.x[i];
}
}
void acceptInput()
{
for(int i=0; i<size; i++)
{
cout<<"Enter a number: ";
cin>>x[i];
}
}
void printCollection()
{
for(int i=0; i<size; i++) cout<<x[i]<<endl;
}
};
int main()
{
IntCollection c1(5);
c1.acceptInput();
cout<<"printing contents of the collection C1"<<endl;
c1.printCollection();
IntCollection c2(c1);
c2.acceptInput();
cout<<"Print Contents of the collection c2"<<endl;
c2.printCollection();
cout<<"printing contents of the collection C1"<<endl;
c1.printCollection();
return 0;
}