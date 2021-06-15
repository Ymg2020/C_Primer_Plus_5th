#include <stdio.h>
int main(void)
{
int number = 0;
int o_accu = 0;
int j_accu = 0;
int o_counter = 0;
int j_counter = 0;
scanf("%d",&number);
while(number != 0)
{
if((number%2)==0)
{
o_accu += number;
o_counter += 1;
}
else
{
j_accu += number;
j_counter += 1;
}
scanf("%d",&number);
}
printf("There are %d oushu and the average of oushu is %d.\n",o_counter,o_accu/o_counter);
printf("There are %d jishu and the average of jishu is %d.\n",j_counter,j_accu/j_counter);
return 0;
}
