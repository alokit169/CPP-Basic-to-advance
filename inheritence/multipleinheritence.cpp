#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
char name[21];
public:
void setName(const char *n)
{
strcpy(name,n);
}
void getName(char *n)
{
strcpy(n,name);
}
};
class employee
{
private:
int id;
int salary;
public:
void setSalary(int e)
{
salary=e;
}
int getSalary()
{
return salary;
}
void setId(int e)
{
id=e;
}
int getId()
{
return id;
}
};
class Doctor:public Person,public employee
{
char type[45];
public:
void setType(const char *p)
{
strcpy(type,p);
}
void getType(char *p)
{
strcpy(p,type);
}
};
int main()
{
Doctor d;
d.setName("Sameer");
d.setType("Dentist");
d.setSalary(5600);
d.setId(1);
char name[21];
char type[45];
int salary,id;
salary=d.getSalary();
id=d.getId();
d.getName(name);
d.getType(type);
cout<<"Employee Details"<<endl;
cout<<"Name : "<<name<<endl;
cout<<"Type: "<<type<<endl;
cout<<"Salary: "<<salary<<endl;
cout<<"ID: "<<id<<endl;
}