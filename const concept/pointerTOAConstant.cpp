#include<iostream>
using namespace std;
int main()
{
    int x;
    const int *p;
    //This is a pointer to a constant that means  the value it points to cannot be changed.but we can change the pointer
    p=&x;
    int y=200;
    p=&y;
    *p=100;
    cout<<"Value of x is "<<x<<endl;
    return 0;
}
