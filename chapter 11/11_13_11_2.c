/*该模块用于向数组写入字符串*/
#include <stdio.h>
#include <string.h>
char * s_gets(char * st,int n);
int main(void)
{
char words[5][81];
char *ptstr[5];
int ct = 0;
while(ct<5 && s_gets(words[ct],81)!=NULL && words[ct][0]!='\0')
{
	ptstr[ct]=words[ct];
	ct++;
}
return 0;
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

