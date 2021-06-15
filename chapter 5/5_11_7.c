#include <stdio.h>
int main(void)
{
double number;
double cubic(double n);
printf("Please input number:\n");
scanf("%lf",&number);
number = cubic(number);
printf("The cubic of input number is:%f\n",number);
return 0;
}

double cubic(double n)
{
double number = n*n*n;
return number;
}
