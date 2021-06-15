#include <stdio.h>
#define DAYS 7
int main(void)
{
int day,last,week;
printf("Please input the number of Days(<0 to quit):\n");
scanf("%d",&day);
while(day>0)
{
last = day%DAYS;
week = (day-last)/DAYS;
printf("%d days are %d weeks,%d days\n",day,week,last);
printf("Please input the number of Days(< 0 to quit):\n");
scanf("%d",&day);
}
printf("ByeBye!");
return 0;
}
