#include <stdio.h>
#define STRLEN 40
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
	while((pt[i]=getchar())!='~' && i<n)
		i++;
	pt[i]='\0';
}
