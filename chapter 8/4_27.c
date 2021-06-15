#include <stdio.h>
int main(void)
{
int number = 1;
int row = 1;
int line = 1;
while(row<=5)
{
	while(line<=row)
		{	
			printf("%d ",number);
			number ++;
			line ++;
		}
	printf("\n");
	row ++;
	line = 1;
}
return 0;
}
