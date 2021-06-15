#include <stdio.h>
void smile(int a);

int main()
{
smile(3);
smile(2);
smile(1);
return 0;
}

void smile(int a)
{
for(int i=1;i<=a;i++)
{
	printf("smile!");
}
printf("\n");
}
