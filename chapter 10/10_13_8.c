#include <stdio.h>
void copy_arr(double ar1[],double ar2[],int n);
void copy_ptr(double ar1[],double ar2[],int n);
void copy_ptrs(double *tar,double *start,double *end);
void show(double *tar,int n);
int main(void)
{
double source[7] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
double target1[3];
double target2[3];
double target3[3];
copy_arr(target1,source,3);
copy_ptr(target2,source,3);
copy_ptrs(target3,source,source+3);
show(source,7);
show(target1,3);
show(target2,3);
show(target3,3);
return 0;
}
void copy_arr(double ar1[],double ar2[],int n)
{
	for(int i=0;i<n;i++)
		ar1[i] = ar2[i+2];
}
void copy_ptr(double ar1[],double ar2[],int n)
{
	for(int i=0;i<n;i++)
	       {
			*ar1=*(ar2+i+2);
			ar1++;
		}
}
void copy_ptrs(double *tar,double *start,double *end)
{
	while(start<end)
		{
			*tar=*(start+2);
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
