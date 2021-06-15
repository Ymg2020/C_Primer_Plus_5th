#include <stdio.h>
void large_of(double *x,double *y);
int main(void)
{
double a=1;
double b=2;
printf("At first number is %lf and %lf",a,b);
large_of(&a,&b);
printf("After is %lf and %lf",a,b);
return 0;
}

void large_of(double *x,double *y)
{
	double temp;
	if(*x<*y)
		*y = *x;
	else
		*x = *y;
}
