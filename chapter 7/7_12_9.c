#include <stdio.h>
int main(void)
{
int number;
int counter = 0;
printf("Please input a zheng number:\n");
scanf("%d",&number);
for(int i=1;i<=number;i++)
{
	for(int div = 1;div*div<=i;div++)
	{
		if(i%div==0)
			{counter ++;
			continue;}
		else
			continue;	
	}	
	if(counter == 1)
		printf("%d is a prime!\n",i);
	counter =0;
}
return 0;
}
