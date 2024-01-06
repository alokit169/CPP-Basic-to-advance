#include<stdio.h>
class Monitor
{
public:
Monitor& operator<<(int x)
{
printf("%d",x);
return *this;
}
Monitor& operator<<(const char *x)
{
printf("%s",x);
return *this;
}
Monitor& operator<<(float x)
{
printf("%f",x);
return *this;
}
Monitor& operator<<(double x)
{
printf("%f",x);
return *this;
}
Monitor& operator<<(void (*p)())
{
p();
return *this;
}
};
namespace ThinkingMachine
{
void newLine()
{
printf("\n");
}
Monitor mout;
}
using namespace ThinkingMachine;
int main()
{
mout<<10<<newLine<<9999<<newLine;
mout<<"A"<<newLine;
mout<<"Alokit"<<newLine;
mout<<16.66f<<newLine;
mout<<45.121212<<newLine;
return 0;
}