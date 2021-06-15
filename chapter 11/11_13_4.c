#include <stdio.h>
#define STRLEN 10
void my_get(char * pt,int n);
int main(void)
{
char words[STRLEN];
puts("Please input the setence.(input ~ to quit.)");
my_get(words,STRLEN);
puts(words);
return 0;
}
void my_get(char * pt,int n)
{	
	int i=0;
	*pt = getchar();
	while(*pt==' '||*pt=='\t'||*pt=='\n')
	{
		*pt=getchar();
	}
	while(*pt!=' ' && *pt!='\t' && *pt!='\n' && i<n )
	{
		pt++;
		*pt=getchar();	
		i++;
	}
}
