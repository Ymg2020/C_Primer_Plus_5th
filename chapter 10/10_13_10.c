#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void add_arr(int ar1[],int ar2[],int ar3[],int n);
void show_arr(int ar[],int n);
int main(void)
{
srand((unsigned)time(NULL));
int arry1[5],arry2[5],arry3[5];
for(int i=0;i<5;i++)
{
	arry1[i]=rand()%100;
	arry2[i]=rand()%100;
}
add_arr(arry1,arry2,arry3,5);
show_arr(arry1,5);
show_arr(arry2,5);
show_arr(arry3,5);
return 0;
}

void add_arr(int ar1[],int ar2[],int ar3[],int n)
{
	for(int i=0;i<n;i++)
		{
			ar3[i]=ar1[i]+ar2[i];
		}
}

void show_arr(int ar[],int n)
{
	for(int i=0;i<n;i++)
		printf("%15d",ar[i]);
	printf("\n");
}
