#include <stdio.h>
#include <string.h>
#define STRLEN 5
void reverse(char * pt,int n);
char * s_gets(char * st,int n);
int main(void)
{
char words[STRLEN];
puts("Please input a setence and I will reverse it.");
s_gets(words,STRLEN);
printf("%s has %d caracter.\n",words,strlen(words));
reverse(words,strlen(words));
puts(words);
return 0;
}
void reverse(char * pt,int n)
{
char temp;
for(int i=0;i<(int)(n/2);i++)
{
	temp = *(pt+i);
	*(pt+i) = *(pt+n-1-i);
	*(pt+n-1-i) = temp;
}
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

