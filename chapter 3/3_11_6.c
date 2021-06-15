#include <stdio.h>
int main(void)
{
float inch;
printf("Please input inch\n");
scanf("%f",&inch);
float cm = inch*2.54;
printf("Your height is %f cm.\n",cm);
return 0;
}
