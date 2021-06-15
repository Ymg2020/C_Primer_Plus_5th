#include <stdio.h>
#define TEN 10
int main(void)
{
int last,number;
printf("Please input the number:\n");
scanf("%d",&number);
last = number+10;
while(number++<last)
{
printf("%d\n",number);
}
return 0;
}
