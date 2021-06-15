#include <stdio.h>
#include <string.h>
#define STRLEN 50
char * s_gets(char * st,int n);
char * string_in(const char * father,const char * son);
int main(void)
{
char words1[STRLEN] = "To be or not to be,this is question.";
char words2[STRLEN];
puts("Please input the words and I will help you.");
s_gets(words2,STRLEN);
puts(string_in(words1,words2));
return 0;
}
char * string_in(const char * father,const char * son)
{
	return strstr(father,son);
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

