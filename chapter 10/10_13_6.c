#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int a,ar[10];
srand((unsigned)time(NULL));
printf("The original number is :\n");
for(int i=0;i<10;i++)
{	ar[i]=rand();
	printf("%d\n",ar[i]);
}
int max=ar[0];
int counter = 0;
for(int k=0;k<9;k++)
{
	for(int j=0;j<9-k;j++)
	{
		if(ar[j]<ar[j+1])
		{
			int temp = ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=temp;
		}
	}
}
printf("The ranked number is :\n");
for(int l=0;l<10;l++)
{
	printf("%d\n",ar[l]);
}
return 0;
}
