#include <stdio.h>
char * g_space(const char * st);
int main(void)
{

return 0;
}
char * g_space(const char * st)
{
	while(*st!='\0'&&*st!=' ')
		st++;
	if(*st=='\0')
		return NULL;
	else 
		return (char *)st;
}
