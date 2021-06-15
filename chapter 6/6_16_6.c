#include <stdio.h>
int main(void)
{
int i,min,max;
printf("Please input the minest number:\n");
scanf("%d",&min);
printf("Please input the maxest number:\n");
scanf("%d",&max);
for(i=min;i<=max;i++)
{
printf("%10d%10d%10d\n",i,i*i,i*i*i);
}
return 0;
}
