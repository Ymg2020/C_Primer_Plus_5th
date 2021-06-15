#include <stdio.h>
#define BASE 10
#define NORMAL 40
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define RAGE1 300
#define RAGE2 450
int main(void)
{
float hours;
float money;
float rate;
printf("Please input the hours of your work everyweek:\n");
while((scanf("%f",&hours))==1)
{if(hours<=NORMAL)
	money = hours*BASE;
else
	money = (NORMAL + (hours-NORMAL)*1.5)*BASE;
if(money<=RAGE1)
	rate = money * RATE1;
else if(money<=RAGE2)
	rate = RAGE1 * RATE1 + (money-RAGE1)*RATE2;
else
	rate = RAGE1 * RATE1 + (RAGE2-RAGE1) * RATE2 + (money-RAGE2)*RATE3;
printf("The acount of wage is %.2f ,the rate is %.2f and the pure wage is %.2f",money,rate,money-rate);
printf("Please input the hours of your work everyweek:\n");
}
return 0;
}
