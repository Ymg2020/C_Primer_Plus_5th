#include <stdio.h>
int main(void)
{
int c=65;
for(int i=0;i<=5;i++)
{
for(int j=0;j<=i;j++)
{
printf("%c",c);
c += 1;
}
printf("\n");
}
return 0;
}
