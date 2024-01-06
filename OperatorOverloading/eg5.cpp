// In this example we are using mout and kin in place of cout and kin 

#include<stdio.h>

namespace thinkingMachine
{
class Monitor
{
public:
Monitor & operator<<(int x)
{
printf("%d",x);
return *this;
}
Monitor & operator<<(const char *x)
{
printf("%s",x);
return *this;
}
Monitor & operator<<(char x)
{
printf("%c",x);
return *this;
}
Monitor & operator<<(double x)
{
printf("%f",x);
return *this;
}
Monitor & operator<<(float x)
{
printf("%f",x);
return *this;
}

Monitor & operator>>(int &x)
{
scanf("%d",&x);
fflush(stdin);
return *this;
}
Monitor & operator>>(char &x)
{
x=getchar();
fflush(stdin);
return *this;
}
Monitor & operator>>(char *x)
{
scanf("%s",x);
fflush(stdin);
return *this;
}
Monitor & operator<<(void (*p)())
{
p();
return *this;
}
};
void newLine()
{
printf("\n");
}
Monitor mout;
Monitor kin;
}
using namespace thinkingMachine;
int main()
{
int a;
char m;
char x[21];
mout<<"Enter a number(int type): ";
kin>>a;
mout<<"Enter a character: ";
kin>>m;
mout<<"Enter a string : ";
kin>>x;
mout<<newLine<<"Data Entery is done"<<newLine;
mout<<a<<newLine;
mout<<m<<newLine;
mout<<x;
return 0;
}