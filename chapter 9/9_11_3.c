#include <stdio.h>
double average(double number1,double number2);
int main(void)
{
double a,b;
printf("Please input two number\n");
while((scanf("%lf %lf",&a,&b)==2)&&((a*b)!=0))
printf("The average is %lf.\n",average(a,b));
return 0;
}

double average(double number1,double number2)
{
	return (1/((1/number1+1/number2)/2));
}
