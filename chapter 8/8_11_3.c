#include <stdio.h>
#include <ctype.h>
int main(void)
{
char ch;
int number;
int Big_counter = 0;
int Small_counter = 0;
while((ch=getchar())!=EOF)
{
	number = ch;
	if(isupper(ch))
		Big_counter ++;
	else if (islower(ch))
		Small_counter ++;
	else
		;
}
printf("There are %d upper character and %d small character.",Big_counter,Small_counter);
return 0;
}
