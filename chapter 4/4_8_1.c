#include <stdio.h>
#include <strings.h>
int main(void)
{
char name[20];
printf("Please input your name:\n");
scanf("%s",name);
int width = strlen(name);
printf("%*s\n",width+3,name);
return 0;
}
