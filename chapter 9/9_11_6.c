#include <stdio.h>
void large_of(double *x,double *y,double *z);
int main(void)
{
double a=1;
double b=3;
double c=2;
printf("At first number is %lf and %lf and %lf",a,b,c);
large_of(&a,&b,&c);
printf("After is %lf and %lf and %lf",a,b,c);
return 0;
}

void large_of(double *x,double *y,double *z)
{
	double temp;
	if(*x<*y)
		;
	else
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
	if(*z>*y)
		;
	else if(*z>*x)
	{	temp = *z;
                *z = *y;
                *y = temp;
	}
	else if(*z<*x)
	{
		temp = *z;
                *z = *x;
                *x = temp;
	}

}
