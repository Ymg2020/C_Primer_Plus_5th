#include <stdio.h>
void critic(int * pt);
int main(void)
{
int units;
int *pt = &units;
puts("How many pounds to a firkin of butter?");
scanf("%d",&units);
while(units != 56)
	critic(pt);
puts("You must have looked it up!");
return 0;
}
void critic(int * pt)
{
	puts("No luck,my friends.Try again.");
	scanf("%d",pt);
}
