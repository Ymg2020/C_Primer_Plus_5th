#include <stdio.h>
#define MIN 60
int main(void)
{
int min,hours,last;
printf("Please input the minutes(<0 to quit):\n");
scanf("%d",&min);
while(min>0)
{
last = min%MIN;
hours = (min-last)/MIN;
printf("%d minutes is %d hours and %d minutes\n",min,hours,last);
printf("Please input the minutes(<0 to quit):\n");
scanf("%d",&min);
}
printf("ByeBye\n");
return 0;
}
