#include <stdio.h>
void copy_arr(double ar1[][5],double ar2[][5],int n,int m);
void copy_ptr(double ar1[][5],double ar2[][5],int n,int m);
void show(double ar[][5],int n,int m);
int main(void)
{
double source[2][5] = {{1.1,2.2,3.3,4.4,5.5},{0.9,1.9,2.9,3.9,4.9}};
double target1[2][5];
double target2[2][5];
copy_arr(target1,source,2,5);
copy_ptr(target2,source,2,5);
show(source,2,5);
show(target1,2,5);
show(target2,2,5);
return 0;
}
void copy_arr(double ar1[][5],double ar2[][5],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{	
			ar1[i][j]=ar2[i][j];	
		}		
	}
}
void copy_ptr(double (*ar1)[5],double (*ar2)[5],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			*(*(ar1+i)+j)=*(*(ar2+i)+j);
		
		}
	}
}
void show(double ar[][5],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			printf("%.1f\n",ar[i][j]);
	}
}
