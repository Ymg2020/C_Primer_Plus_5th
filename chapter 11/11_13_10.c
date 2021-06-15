#include <stdio.h>
#include <string.h>
#define STRLEN 40
char * rm_space(const char * pt,int n);
char * s_gets(char * st,int n);
int main(void)
{
char words[STRLEN];
puts("Please input a setence and I will remove the space.");
s_gets(words,STRLEN);
puts(words);
rm_space(words,strlen(words));
//puts(rm_space(words,strlen(words)));
return 0;
}
char * rm_space(const char * pt,int n)
{
	int counter = 0;
	char new_words[n];
	
	for(int i=0;i<n;i++)
	{
		if(*(pt+i)!=' ')
			*(new_words+i-counter)=*(pt+i);
		else
			counter++;
	}
	printf("There are %d space in this setence.\n",counter);
	puts(new_words);
	return new_words;
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

