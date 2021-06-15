#include <stdio.h>
#include <ctype.h>
int main(void)
{
char ch;
int number;
float counter = 0;
float amount = 0;
while((ch = getchar())!=EOF)
{
	number = ch;
	if(ch=='\n'||ch==' ')
		counter ++;
	if(((number>=65)&&(number<=90))||((number>=97)&&(number<=122)))
		amount ++;
}
printf("There are %.0f words and %.0f character.\n",counter,amount);
printf("The average  long of character in this file is %.2f .\n",amount/counter);
return 0;
}
