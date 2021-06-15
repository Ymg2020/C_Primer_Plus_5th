#include <stdio.h>
int main(void)
{
double fc;
double Temperatures(double fc);
printf("Please input your tempreture:\n");
int k = scanf("%lf",&fc);
while(k==1)
{
Temperatures(fc);
printf("Please input your tempreture:\n");
k = scanf("%lf",&fc);
}
return 0;
}

double Temperatures(double fc)
{
const double number1 = 32.0;
const double number2 = 273.16;
double c = 5.0/9.0*(fc-number1);
double kc = c+number2;
printf("The Fc is %.2lf ,the c is %.2lf,the kc is %.2lf\n",fc,c,kc);
}
