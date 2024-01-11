/*
//First Approach
create  a class 
TMString s;
s="Ujjain";
cout<<s<<endl;
*/

#include<iostream>
#include<cstring>
using namespace std;
class TMString
{
char string[100];
public:
TMString()
{}
TMString(const char *string)
{
strcpy(this->string,string);
}
TMString & operator=(const char *j)
{
strcpy(string,j);
return *this;
}
friend ostream & operator<<(ostream &out,TMString &v);
};

ostream & operator<<(ostream &out,TMString &v)
{
out<<v.string;
return out;
}
int main()
{
TMString s;
s="Ujjain Indore";
TMString s1("Ratlam");
cout<<s1<<endl;
cout<<s<<endl;
s=s1;
cout<<s<<endl;
return 0;
}