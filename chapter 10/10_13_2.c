#include <stdio.h>
void copy_arr(double ar1[],double ar2[],int n);
void copy_ptr(double ar1[],double ar2[],int n);
void copy_ptrs(double *tar,double *start,double *end);
void show(double *tar,int n);
int main(void)
{
double source[5] = {1.1,2.2,3.3,4.4,5.5};
double target1[5];
double target2[5];
double target3[5];
copy_arr(target1,source,5);
copy_ptr(target2,source,5);
copy_ptrs(target3,source,source+5);
show(source,5);
show(target1,5);
show(target2,5);
show(target3,5);
return 0;
}
void copy_arr(double ar1[],double ar2[],int n)
{
	for(int i=0;i<n;i++)
		ar1[i] = ar2[i];
}
void copy_ptr(double ar1[],double ar2[],int n)
{
	for(int i=0;i<n;i++)
	       {
			*ar1=*(ar2+i);
			*ar1++;
		}
}
void copy_ptrs(double *tar,double *start,double *end)
{
	while(start<end)
		{
			*tar=*start;
			tar++;
			start++;
		}
}
void show(double ar[],int n)
{
	for(int i=0;i<n;i++)
		printf("%.1f ",ar[i]);
	printf("\n");
}
