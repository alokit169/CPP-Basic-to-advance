#include<iostream>
using namespace std;
template <class T>
class TMStack
{
T x[10];
int top;
public:
TMStack();
TMStack(const TMStack &other);
TMStack & operator=(TMStack &other);
virtual ~TMStack();
void push(T data);
T pop();
int isEmpty();
int isFull();
};
template <class T>
TMStack<T>::TMStack()
{
for(int i=0; i<=9; i++) this->x[i]=0;
this->top=10;
}

template <class T>
TMStack<T>::TMStack(const TMStack<T> &other)
{
for(int e=9; e>=other.top; e--) this->x[e]=other.x[e];
this->top=other.top;
}
template <class T>
TMStack<T> & TMStack<T>::operator=(TMStack<T> &other)
{
for(int e=9; e>=other.top; e--) this->x[e]=other.x[e];
this->top=other.top;
return *this;
}
template <class T>
TMStack<T>::~TMStack()
{
//Do Nothing
}
template <class T>
void TMStack<T>::push(T data)
{
if(top==0) return;
this->x[--top]=data;
}
template <class T>
T TMStack<T>::pop()
{
if(top==10) return 0;
return this->x[top++];
}
template <class T>
int TMStack<T>::isEmpty()
{
return this->top==10;
}
template <class T>
int TMStack<T>::isFull()
{
return this->top==0;
}
class Bulb
{
int wattage;
public:
Bulb()
{
this->wattage=0;
}
Bulb(int wattage)
{
this->wattage=wattage;
}
void setWattage(int wattage)
{
this->wattage=wattage;
}
int getWattage()
{
return this->wattage;
}
};

/*
int main()
{
TMStack<int> s1;
s1.push(10);
s1.push(20);
s1.push(30);
TMStack<int> s2=s1;
s2.push(40);
s2.push(50);
TMStack<int> s3;
s3=s2;
s3.push(60);
cout<<"Popping from S1\n";
while(!s1.isEmpty()) cout<<s1.pop()<<endl;
cout<<"Popping from S2\n";
while(!s2.isEmpty()) cout<<s2.pop()<<endl;
cout<<"Popping from s3\n";
while(!s3.isEmpty()) cout<<s3.pop()<<endl;
return 0;
}
*/

int main()
{
TMStack<Bulb *> stack;
stack.push(new Bulb());
stack.push(new Bulb(60));
stack.push(new Bulb(100));
Bulb *b;
while(!stack.isEmpty())
{
b=stack.pop();
cout<<"Bulb with wattage " << b->getWattage()<<" popped"<<endl;
delete b;
}
return 0;
}