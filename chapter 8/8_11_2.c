#include <stdio.h>
int main(void)
{
char ch;
int number;
int counter = 0;
while((ch=getchar())!=EOF)
{
	number = ch;
	if ((number>=20)&&(number<=126))
		{
			printf("%c%d	",ch,number);
		}
	else if((ch=='\n'))
		printf("\\n\n");
	else if(ch == '\t')
		printf("\\t\t");
	else if(number<20)
		printf("^%c",ch+64);
}
return 0;
}
