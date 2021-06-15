#include <stdio.h>
int main(void)
{
char option;
float onion_weight = 0;
float cabeage_weight = 0;
float carrot_weight = 0;
float counter = 0;
float accu_weight = 0;
float pure_money = 0;
float real_money = 0;
float carry_money = 0;
printf("********************************************************\n");
printf("Please select the carage you want:\n");
printf("a) onion        b)cabeage       c)carrot        q)quit\n");
printf("********************************************************\n");
while((option=getchar())!='q')
{
switch (option)
{
case 'a' :
{
	printf("Please input the weight of onion:\n");
	scanf("%f",&counter);
	onion_weight += counter;
	break;
}
case 'b' :
{
        printf("Please input the weight of cabeage:\n");
        scanf("%f",&counter);
        cabeage_weight += counter;
	break;
}
case 'c' :
{
        printf("Please input the weight of carrot:\n");
        scanf("%f",&counter);
        carrot_weight += counter;
	break;
}
//case '\n':
//	printf("I catch you!");
default:
	printf("Error input ,please try agian.\n");
}
while(getchar()!='\n')
	continue;
printf("********************************************************\n");
printf("Please select the carage you want:\n");
printf("a) onion        b)cabeage       c)carrot        q)quit\n");
printf("********************************************************\n");

}
accu_weight = cabeage_weight + onion_weight + carrot_weight;
pure_money = onion_weight * 2.05 + cabeage_weight * 1.15 +carrot_weight * 1.09;
if(pure_money>=100)
	real_money = pure_money *0.95;
else
	real_money = pure_money;

if(accu_weight<=5)
	carry_money = 6.5;
else if(accu_weight<=20)
	carry_money = 14;
else
	carry_money = 14 + (accu_weight - 20) * 0.5;

printf("The shoujia of onion is $2.05/bang ,cabeage is $1.15/bang, carrot is $1.09/bang.\n");
printf("onion weight:%.2f\n",onion_weight);
printf("cabeage weight:%.2f\n",cabeage_weight);
printf("carrot weight:%.2f\n",carrot_weight);
printf("cost of carage:%.2f\n",real_money);
printf("Total cost:%.2f\n",real_money+carry_money);
printf("chase:%.2f\n",pure_money-real_money);
printf("carry money:%.2f\n",carry_money);
printf("Thanks for your coming !\n");
return 0;
}
