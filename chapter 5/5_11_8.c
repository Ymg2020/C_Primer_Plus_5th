#include <stdio.h>
int main(void)
{
int first,second,last;
printf("This program computes moduli.\nEnter an integer to serve as the second operand:\n");
scanf("%d",&second);
printf("Now enter the first operand:\n");
scanf("%d",&first);
while(first>0)
{
last = first%second;
printf("%d %% %d is %d\n",first,second,last);
printf("Enter next number for first operand (<0 to quit):\n");
scanf("%d",&first);
}
return 0;
}
