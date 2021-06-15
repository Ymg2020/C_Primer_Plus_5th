#include <stdio.h>
int main(void)
{
char name[40];
float height;
printf("Please input your height(cm) and name:\n");
scanf("%f %s",&height,name);
printf("%s,you are %.2fm tall\n",name,height/100);
return 0;
}
