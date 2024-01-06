#include<iostream>
using namespace std;
class rectangle // Rectangle has 6 members and it is base class of box
{
int length;
int breadth;
public:
void setLength(int e)
{
length=e;
}
int getLength()
{
return legngth;
}
void setBreadth(int e)
{
breadth=e;
}
int getBreadth()
{
return breadth;
}
}
class Box:public rectangle //Box is derived class of rectangle
{
int height;
public:
void setHeight(int e)
{
height=e;
}
int getHeight()
{
return height;
}
};
int main()
{
Box x;
// unable to access length,breadth and height as thery are private property of box;
x.length=10;
x.breadth=20;
x.height=30; 
x.setLength(10);
x.setBreadth(20);
x.setHeight(15);
std::cout<<"Length: "<<x.getLength()<<endl;
cout<<"Breadth: "<<x.getBreadth()<<endl;
cout<<"Height: "<<x.getHeight()<<endl;
return 0;
}