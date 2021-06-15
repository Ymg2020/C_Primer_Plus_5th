#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rank(int * pt,int n);
int main(void)
{
int pt[1000];
int count = 0;

srand((unsigned int)time(NULL));
for(int i=0;i<1000;i++)
{
	pt[i] = rand()%10+1;
}
for(int number = 1;number <11;number++)
{
	for(int j=0;j<1000;j++)
	{
		if(pt[j]==number)
			count++;
	}
	printf("There are %d of %d in this random number.\n",count,number);
	count = 0;
}
return 0;
}
void rank(int * pt,int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(*(pt+i)<*(pt+j))
			{
				temp = *(pt+i);
				*(pt+i) = *(pt+j);
				*(pt+j) = temp;
			}
		}
	}
}
