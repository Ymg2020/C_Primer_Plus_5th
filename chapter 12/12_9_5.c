#include <stdio.h>
#include <stdlib.h>
void rank(int * pt,int n);
int main(void)
{
int pt[100];
for(int i=0;i<100;i++)
{
	pt[i] = rand()%10+1;
}
rank(pt,100);
for(int j=0;j<99;j++)
	printf("%d\n",pt[j]);
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
