#include <stdio.h>
double smaller(double a,double b);
int main(void)
{
double number1,number2;
printf("Enter two number:\n");
while(scanf("%lf %lf",&number1,&number2)==2)
{
	printf("The smaller number is %.2lf\n",smaller(number1,number2));
	printf("please input another number:\n");
}
return 0;
}

double smaller(double a,double b)
{
	if(a<b)
		return a;
	else 
		return b;
}
