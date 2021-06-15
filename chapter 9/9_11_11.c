#include <stdio.h>
int main(void)
{
int number1=1;
int number2=1;
int range,temp;
printf("Please input the range of Fibonacci:\n");
while(scanf("%d",&range))
{
if((range == 1)||(range == 2))
printf("1\n");
else 
{
	for(int i=1;i<=range-2;i++)
	{	
		temp = number2;
		number2 += number1;
		number1 = temp;	
	}
printf("%d\n",number2);
}
number1=1;
number2=1;
}
return 0;
}
