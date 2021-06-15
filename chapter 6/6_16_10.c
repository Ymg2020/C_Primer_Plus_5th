#include <stdio.h>
int main(void)
{
int number[20];
for(int i=0;i<=7;i++)
{
printf("Please input the NO.%d number:\n",i+1);
scanf("%d",&number[i]);
}
for(int j=7;j>=0;j--)
printf("%d",number[j]);
return 0;
}
