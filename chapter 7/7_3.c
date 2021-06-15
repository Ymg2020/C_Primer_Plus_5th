#include <stdio.h>
#include <ctype.h>
int main(void)
{
char a;
printf("Please input the char:\n");
while((a=getchar()) != "\n")
{
if(isalpha(a))
{putchar(a+1);}
else
{putchar(a);}
}
printf("ByeBye~\n");
return 0;
}
