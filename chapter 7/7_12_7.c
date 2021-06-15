#include <stdio.h>
int main(void)
{
int option;
float rate,hour,money;
printf("**********************************************************************\n");
printf("Enter the number correspoding  to the options\n");
printf("1) single				2) householder\n");
printf("3) married				4) devioce\n");
printf("5) quit\n");
printf("**********************************************************************\n");
scanf("%d",&option);
while(option != 5)
{
printf("Please input the money you have earned:\n");
scanf("%f",&money);
switch (option)
{
case 1: if(money<17850)
		rate = money*0.15;
	else
		rate = 17850*0.15+(money-17850)*0.28;
	break;
case 2: if(money<23900)
                rate = money*0.15;
        else
                rate = 23900*0.15+(money-23900)*0.28;
        break;
case 3: if(money<29750)
                rate = money*0.15;
        else
                rate = 29750*0.15+(money-29750)*0.28;
        break;
case 4: if(money<14875)
                rate = money*0.15;
        else
                rate = 14875*0.15+(money-14875)*0.28;
        break;
}
printf("The rate of money is %.2f\n",rate);
printf("**********************************************************************\n");
printf("Enter the number correspoding  to the options\n");
printf("1) single                               2) householder\n");
printf("3) married                              4) devioce\n");
printf("5) quit\n");
printf("**********************************************************************\n");
scanf("%d",&option);
}
return 0;
}
