#include<iostream>
using namespace std;
class aaa
{
int x[10];
public:
void setValueAt(int k,int num)
{
if(k<0 || k>9) return;
x[k]=num;
}
int getSize()
{
return 10;
}
int operator[](int e)
{
if(e<0 || e>9) return 0;
return x[e];
}
};
int main()
{
int num;
aaa a;
for(int j=0; j<a.getSize(); j++)
{
cout<<"Enter a number: ";
cin>>num;
a.setValueAt(j,num);
}
cout<<"List of the number : "<<endl;
for(int j=0; j<a.getSize(); j++) cout<<a[j]<<endl;
return 0;
}