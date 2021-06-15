#include <stdio.h>
#include <ctype.h>
#define STRLEN 20000
int main(void)
{
char words[STRLEN];
char *ptstr;
int i = 0;
while((words[i++]=getchar())!=EOF)
	if(i>STRLEN)
	{
		puts("Overflowed!");
		break;
	}
ptstr = words;
puts(ptstr);
int flag = 0;
int count = 0;
while(*ptstr != EOF)
{
	if(isalpha(*ptstr)==0 && flag==0)
		ptstr++;
	else if(isalpha(*ptstr)==0 && flag==1)
	{	
		count++;
		ptstr++;
		flag = 0;
	}
	else if(isalpha(*ptstr)!=0)
	{
		ptstr++;
		flag = 1;
	}
}
printf("There are %d words in this file.\n",count);
return 0;
}
