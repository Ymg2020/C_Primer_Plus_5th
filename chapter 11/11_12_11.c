#include <stdio.h>
char * s_gets(char * st,int n);
int main(void)
{
char words[100] = "I love you."
char * pt = s_gets(words,100);
puts(pt);
return 0;
}
char * s_gets(char * st,int n)
{
	char * ret_val,* pt;
	ret_val = fgets(st,n,stdin);
	if(ret_val)
	{	
		pt = strchr(st,'\n');
		if(*pt=='\n')
			*pt='\0';
		else
			while(getchar()!='\n')
	
				continue;
	
	}
	return ret_val;
}
