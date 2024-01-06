//If Property of Class is of array type

/*
#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e)
{
if(e>0 && e<=240) w=e;
else w=0;
}
int * getWattage() //It is mistake of programmer that one side he is using encasulation and on other hand exposing the the address of w to outer world 
{
return &w;
}
};
int main()
{
Bulb g;
int *p;
p=g.getWattage(); // by the address of w we can access the private member of the class so we have to keep in mind that we don't expose the address of private memeber.
*p=666;
return 0;
}

*/
//Blunder in code

/* 
#include<iostream>
#include<string.h>
using namespace std;
class Book
{
private:
char tittle[45];
public:
void setTittle(const char *t)
{
if(strlen(t)>45) tittle[0]='\0';
else strcpy(tittle,t);
}
char * getTittle()
{
return tittle;
}
};
int main()
{
Book b;
char *k;
b.setTittle("God Father");
cout<<b.getTittle();
k=b.getTittle();
strcpy(k,"ABCDETGGGGG");
cout<<endl<<b.getTittle();
}

*/

//Whenever property is of array type we are returning anything from getter , we get the address from the user instead of returning the address and copy the string in that address
#include<iostream>
#include<string.h>
using namespace std;
class Book
{
private: 
char tittle[45];
public:
void setTittle(const char *t)
{
if(strlen(t)>45) tittle[0]='\0';
else strcpy(tittle,t);
}
void getTittle(char *t)
{
strcpy(t,tittle);
}
};

int main()
{
Book b;
char t[45];
b.setTittle("Alokit Sharma");
b.getTittle(t);
cout<<t;
return 0;
}