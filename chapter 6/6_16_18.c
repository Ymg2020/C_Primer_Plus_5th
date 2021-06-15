#include <stdio.h>
int main(void)
{
int first =5;
int week =0;
do
{
first -= 1;
first *= 2;
week += 1;
}while(first<=150);
printf("After %d weeks ,the number of friends is passed 150!\n",week);
return 0;
}
