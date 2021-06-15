#include <stdio.h>
#include <stdlib.h>
int count(void);
int counter = 0;
int main(void)
{
	for(int i =0;i<10;i++)
	{
		printf("I have used %d times count()",count());
	}
	return 0; 
}
int count(void)
{
	counter ++;
	return counter;
}
