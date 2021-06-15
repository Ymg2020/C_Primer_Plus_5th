#include <stdio.h>
int main(void)
{
float number;
printf("Input a number:\n");
scanf("%f",&number);
printf("The input is %.2f or %.1e",number,number);
return 0;
}
