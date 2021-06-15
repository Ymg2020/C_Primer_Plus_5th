#include <stdio.h>
int main(void)
{
float brother = 100;
float sister = 100;
int year = 0;
do
{
brother += 10;
sister *= 1.05;
year += 1;
}while(brother>=sister);
printf("When in the %d years,sister earn more money than brother!\nBrother earn %.2f money,sister earn %.2f money",year,brother,sister);
return 0;
}
