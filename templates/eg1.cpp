#include<iostream>
using namespace std;
template <class cartoon>
void add(cartoon x,cartoon y)
{
cartoon z;
z=x+y;
cout<<"Total is : "<<z<<endl;
}
int main()
{
add(10,30);
add(2.2f,3.345f);
return 0;
}