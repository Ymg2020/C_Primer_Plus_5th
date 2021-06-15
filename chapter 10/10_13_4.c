#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int a,ar[10];
srand((unsigned)time(NULL));
for(int i=0;i<10;i++)
{	ar[i]=rand();
	printf("%d\n",ar[i]);

}
int max=ar[0];
int jmax=0;
for(int j=0;j<10;j++)
{
	if(max<=ar[j])
{		max=ar[j];
		jmax=j;
}
	else
		;
}
printf("The maxest number of this serial is :%d\n",max);
printf("The serial number of maxest is %d.\n",jmax+1);
return 0;
}
