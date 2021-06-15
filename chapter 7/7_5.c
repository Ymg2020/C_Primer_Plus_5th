#include <stdio.h>
int main(void)
{
int number;
int counter = 0;
printf("Please enter an integer for analysis.\nEnter q to quit.");
while((scanf("%d",&number))==1)
{
for(int div=2;(div*div)<=number;div++)
{
if((number%div)==0)
{
printf("%d is divisible by %d and %d.\n",number,div,number/div);
counter += 1;
}
}
if(counter==0)
{
printf("%d is prime!\n",number);
}
printf("Please enter an integer for analysis.\nEnter q to quit.");
}
return 0;
}
