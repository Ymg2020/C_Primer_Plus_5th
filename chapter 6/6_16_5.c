#include <stdio.h>
char input(void);
int main(void)
{
char c = input();
for(int i=0;i<=4;i++)
{
	for(int j=0;j<=4-i;j++)
	{
		printf(" ");
	}
	for(int k=0;k<=i-1;k++)
	{
		printf("%c",c-4+k);
	}
	printf("%c",c-4+i);
        for(int k=0;k<=i-1;k++)
        {
                printf("%c",c-5+i-k);
        }
        for(int j=0;j<=4-i;j++)
        {
                printf(" ");
        }
printf("\n");
}
}

char input(void)
{
char a;
printf("Please input the Character:\n");
scanf("%c",&a);
return a;
}
