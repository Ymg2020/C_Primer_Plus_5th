#include <stdio.h>
int main(void)
{
int number[7];
int a=1;
int i,j,k=0;
for (i=0;i<=7;i++)
{
	for (j=0;j<=i;j++)
	{a*=2;
	}
	number[i] = a;
	a=1;
}
do
{
printf("%d\n",number[k]);
k += 1;
}while(k<=8);
return 0;
}
