#include<iostream>
using namespace std;
class aaa
{
    int x;
  public:
  int doSomething() const
  {
    
    cout<<"Do Something got called"<<x<<endl;
    return 20;
  }  
};
int main()
{
    const aaa a;
    a.doSomething();
    return 0;
}
/*
Technically we are passing the address of an object to this pointer of doSomething which may change the
content of the object so due to this code not get compiled 
To compile the code we announced that we donot change anything by writting the const kwyword  before class name i.e.,const aaa a;
*/