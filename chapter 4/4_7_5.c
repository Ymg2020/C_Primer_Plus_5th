#include <stdio.h>
#define BOOK "war and peace"
int main(void)
{
float cost = 12.99;
float percent = 80.0;
printf("This copy of \"%s\" sells for $%.2f.\nThat is %2.0f%% of list.\n",BOOK,cost,percent);
return 0;
}
