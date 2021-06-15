#include <stdio.h>
int main(void)
{
int temp;
float all_day = 0;
float cold_day = 0;
printf("Please input the lowest temprture of the day:\n");
printf("Input q to quit.\n");
while(scanf("%d",&temp)==1)
{
all_day += 1;
if(temp<0)
{
cold_day += 1;
}
}
if(all_day == 0)
printf("The temprture is error!");
else
printf("The percent of cold day is %%%.2f",100*cold_day/all_day);
return 0;
}
