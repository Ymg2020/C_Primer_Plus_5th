#include <stdio.h>
#include <string.h>
#define STRLEN 20
char * mystrncpy(char * s1,char * s2,int n);
char * s_gets(char * st,int n);
int main(void)
{
char words1[STRLEN],words2[STRLEN];
puts("Please input the sectence to remember.");
s_gets(words2,STRLEN);
puts(mystrncpy(words1,words2,STRLEN));
return 0;
}
char * mystrncpy(char * s1,char * s2,int n)
{	
	int counter = 0;
	while((*s1 != '\0')&&(counter < n))
		*(s1+counter++) = *(s2++);
	return s1;
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

