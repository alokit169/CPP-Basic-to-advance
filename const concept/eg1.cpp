//const is keyword that specifies that the variable value is constant and tell the compiler to prevent the compiler to modifing it.
#include<iostream>
using namespace std;
/*
// in this we are able to change the value of the  x as x is a normal variable 
int main()
{
    int x=10;
    x++; 
    cout<<x<<endl;
    return 0;
}
*/

int main()
{
    const  int x = 10; // here x becomes a constant, so its value cannot be changed
    x++; 
    cout<<x<<endl;
    return 0;
}
/*
error: increment of read-only variable 'x'
     x++;*/