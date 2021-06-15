#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 256
void to_lower(char *pt);
void to_upper(char *pt);
int main(int argc,char *argv[])
{
	char c;
	if(argc<2)
		c='p';
	else
		c=argv[1][1];
	char words[SIZE];
	printf("Please input a setence.\n");
	fgets(words,SIZE,stdin);
	switch (c)
	{
		case 'p':
		case 'P':puts(words);break;
	
		case 'l':
		case 'L':to_lower(words);break;

		case 'u':
		case 'U':to_upper(words);break;
	}
}
void to_lower(char *pt)
{
	while(*pt!=EOF&&*pt!='\0')
		putchar(tolower(*pt++));
}
void to_upper(char *pt)
{
	while(*pt!=EOF&&*pt!='\0')
		putchar(toupper(*pt++));
}
