#include <stdio.h>
int main(void)
{
int years;
printf("How old are you?\n");
scanf("%d",&years);
float second = years*3.156E7;
printf("You have passed %e second.\n",second);
return 0;
}
