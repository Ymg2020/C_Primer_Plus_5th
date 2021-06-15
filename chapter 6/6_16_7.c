#include <stdio.h>
#include <string.h>
int main(void)
{
char f[40];
int i;
printf("Please input the char:\n");
int t = scanf("%s",f);
	int n = strlen(f);
	for(i=n;i>=0;i--)
		{
			printf("%c",f[i]);
		}
printf("\n");
return 0;
}
