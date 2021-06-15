#include <stdio.h>
#define STRLEN 40
void my_get(char * pt,int n);
int main(void)
{
char words[STRLEN];
puts("Please input the setence.");
my_get(words,STRLEN);
puts(words);
return 0;
}
void my_get(char * pt,int n)
{
	for(int i=0;i<n;i++)
	{
		pt[i]=getchar();
		if(pt[i]==' '||pt[i]=='\t'||pt[i]=='\n')
			break;
	}
}
