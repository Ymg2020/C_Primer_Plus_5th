#include <stdio.h>
char * s_gets(char * st,int n);
int strl(const char * pt);
int main(void)
{
puts("Please input the setence and i will count the character.");
char * pt;
pt = fgets(pt,1000,stdin);
printf("There are %d character in this file:\n",strl(pt));
return 0;
}
int strl(const char * pt)
{
	int n=0;
	while(*pt++)
		n++;
	return n;
}
char * s_gets(char * st,int n)
{
        char * ret_val;
        ret_val = fgets(st,n,stdin);
        if(ret_val)
        {
                while(*st!='\n'&&*st!='\0')
                        st++;
                if(*st=='\n')
                        *st='\0';
                else
                        while(getchar()!='\n')
                                continue;
        }
        return ret_val;
}

