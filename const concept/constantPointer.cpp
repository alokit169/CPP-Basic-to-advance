#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int * const p=&x;
    // *p=10;  error: assignment of read-only location ‘*p’
    // constant pointer means we can not change the pointer  value but we can modify the object that it points to.
    *p=100;
    cout<<"Value of x is "<<x<<endl;
    *p=300;
    cout<<"New value of x is "<<x<<endl;
    p=&y;
    y=200;
    
    return 0;
}