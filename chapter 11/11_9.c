#include <stdio.h>
#define STLEN 20
int main(void)
{
int i;
char words[STLEN];
puts("Enter a string ,please.(Empty line to quit.)");
while((fgets(words,STLEN,stdin)!=NULL)&&(words[0]!='\n'))
{
	i=0;
	while((words[i]!='\n')&&(words[i]!='\0'))
		i++;
	if(words[i]=='\n')
		words[i]=='\0';
	else
		while(getchar()!='\n')
			continue;
	fputs(words,stdout);
}
puts("Done.");
return 0;
}
