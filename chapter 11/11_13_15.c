#include <stdio.h>
#include <string.h>
#include <ctype.h>
int my_atoi(char *argv);
int main(int argc,char *argv[])
{
	char number[8];
	puts("Please input a number:");
	scanf("%s",number);
	printf("%d",my_atoi(number));
	return 0;
}
int my_atoi(char *pt)
{
	int result = 0;
	int bit_mark = 1;
	int length = strlen(pt);
	for(int i = length;i>0;i--)
	{
		if(isdigit(*(pt+i-1))==0)
		{
			printf("Error input.\n");
			break;
		}
		result += (*(pt+i-1)-'0')*bit_mark;
		bit_mark *= 10;
	}
	return result;

}
