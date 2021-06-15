#include <stdio.h>
#define space " "
int main(void)
{
char a;
a = getchar();
while(a != "\n")
{
if(a==space)
putchar(a);
else
putchar(a+1);
a = getchar();
}
return 0;
}
