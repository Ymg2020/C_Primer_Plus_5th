#include <stdio.h>
#define feet_to_cm 30.48
#define inch_to_cm 2.54
int main(void)
{
float cm,inch;
int feet;
printf("Please input your height:(<0 to quit)\n");
scanf("%f",&cm);
while(cm>0)
{
feet = cm/feet_to_cm;
inch = (cm-feet*feet_to_cm)/inch_to_cm;
printf("%.1f cm = %d feet, %.1f inches",cm,feet,inch);
printf("Please input your height:(<0 to quit)\n");
scanf("%f",&cm);
}
return 0;
}
