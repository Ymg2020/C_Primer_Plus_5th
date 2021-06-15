#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
char ch,perv;
int partial=0,character=0,word=0,line=0;
bool inword = false;
printf("Enter text to be analyzed (| to terminate):\n");
ch =getchar();
while(ch != '|')
{
	character += 1;
	if(ch == '\n')
	{	line += 1;
		word += 1;
	}
	else if(ch == ' ')
		word += 1;
	perv = ch;
	ch = getchar();
}
if(perv != '\n')
{	
	partial=1;
	line += 1;
}
printf("Characters = %d, words = %d, lines = %d,partial lines = %d.",character,word,line,partial);
return 0;
}
