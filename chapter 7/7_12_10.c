#include <stdio.h>
int main(void)
{
int option;
float rate,hour,money;
printf("**********************************************************************\n");
printf("Enter the number correspoding  to the desired pay rate or action\n");
printf("1) $8.75/hr				2) $9.33/hr\n");
printf("3) $10.00/hr				4) $11.20/hr\n");
printf("5) quit\n");
printf("**********************************************************************\n");
scanf("%d",&option);
while(option != 5)
{
switch (option)
{
case 1: rate = 8.75;break;
case 2: rate = 9.33;break;
case 3: rate = 10.00;break;
case 4: rate = 11.20;break;
}
printf("Please input the hour you want to work:\n");
scanf("%f",&hour);
money = hour*rate;
printf("you work %f hour,your rate is %f,You can earn %f money.\n",hour,rate,money);
printf("**********************************************************************\n");
printf("Enter the number correspoding  to the desired pay rate or action\n");
printf("1) $8.75/hr                             2) $9.33/hr\n");
printf("3) $10.00/hr                            4) $11.20/hr\n");
printf("5) quit\n");
printf("**********************************************************************\n");
scanf("%d",&option);
}
return 0;
}
