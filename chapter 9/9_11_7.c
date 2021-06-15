#include <stdio.h>
#include <ctype.h>
int locate(char ch);
int main(void)
{
char ch;
printf("Please input a char and let me locate it:\n");
scanf("%c",&ch);
printf("The locate of this char is :%d",locate(ch));
return 0;
}

int locate(char ch)
{
	int number = ch;
	if(isalpha(ch))
{
	if((number>=65)&&(number<=90))
		number += 32;
	else 
		;
	return (number-96); 
}
else
return -1;
}
