#include<stdio.h>
class Monitor
{
public:
Monitor & operator<<(int x)
{
printf("%d",x);
return *this;
}
Monitor & operator<<(long long int x)
{
printf("%lld",x);
return *this;
}
Monitor & operator<<(const char x)
{
printf("%c",x);
return *this;
}
Monitor & operator<<(const char *x)
{
printf("%s",x);
return *this;
}
Monitor & operator<<(float x)
{
printf("%f",x);
return *this;
}
Monitor & operator<<(double x)
{
printf("%lf",x);
return *this;
}
Monitor & operator<<(void (*p)())
{
p();
return *this;
}
};
class Keyboard
{
public:
Keyboard & operator>>(int &x)
{
scanf("%d",&x);
fflush(stdin);
return *this;
}
Keyboard & operator>>(char &j)
{
j=getchar();
fflush(stdin);
return *this;
}
Keyboard & operator>>(char *x)
{
scanf("%s",x);
fflush(stdin);
return *this;
}
};

namespace thinkingMachine
{
void newline()
{
printf("\n");
}
Monitor mout;
Keyboard kin;
}
using namespace thinkingMachine;
int main()
{
mout<<10<<newline<<20<<"God is grear"<<newline;
mout<<2024.01<<newline;
mout<<3949494949<<newline;
mout<<"A";
int x;
char m;
char a[22];
mout<<"Enter a integer: ";
kin>>x;
mout<<"Enter a character: ";
kin>>m;
mout<<"Enter a sting: ";
kin>>a;
mout<<x<<newline;
mout<<m<<newline;
mout<<a;
return 0;
}