#include <stdio.h>
#define RATE 0.08
int main(void)
{
float money =100;
int year =0;
do
{
money *= (1+RATE);
money -=10;
year += 1;
}while(money>0);
printf("It costs %d years to consume the money!",year);
return 0;
}
