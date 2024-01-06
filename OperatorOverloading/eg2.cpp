//Replica of cin

#include<stdio.h>
namespace thinkingMachine
{
class keyboard
{
public:
keyboard& operator>>(int &x)
{
scanf("%d",&x);
fflush(stdin);
return *this;
}
keyboard& operator>>(char &	x)
{
x=getchar();
fflush(stdin);
return *this;
}
keyboard& operator>>(char *x)
{
scanf("%s",x);
fflush(stdin);
return *this;
}
};
keyboard kin;
}
using namespace thinkingMachine;
int main()
{
int x;
char m;
char a[21];
printf("Enter a number(int type): ");
kin>>x;
printf("Enter a character: ");
kin>>m;
printf("Enter a string: ");
kin>>a;
printf("%d\n",x);
printf("%c\n",m);
printf("%s\n",a);
return 0;
}