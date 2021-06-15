#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char copy[20];
	int number;
	puts("How many words do you wish to enter:");
	while(scanf("%d",&number) == 1 && number > 0)
	{
		char **pt = (char **)malloc(number*sizeof(char *));
		printf("Enter %d words now",number);
		for(int i=0;i<number;i++)
		{
			scanf("%s",copy);
			int length =strlen(copy);
			char *str = (char*)malloc(length*sizeof(char));
			strcpy(str,copy);
			*(pt+i) = str;
		}
		puts("Here are your words:");
		for(int i=0;i<number;i++)
			puts(*(pt+i));
		puts("How many words do you wish to enter:");
	}
	return 0;
}
