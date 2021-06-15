#include <stdio.h>
#include <string.h>
#define STRLEN 50
char * s_gets(char * st,int n);
char * find(const char * pt1,const char * pt2,int n);
int is_within(char a,const char * pt);
int main(void)
{
char words1[STRLEN] = "Where are you? Ymg.You are beautiful.";
char words2;
puts("Please input the character and let me confine.(Input ~ to quit.)");
while((words2=getchar())!='~')
{
	if(is_within(words2,words1))
		puts("The setence have the character.");
	else
		puts("No characte in this setence,please try again.");
	while((words2=getchar())!='\n')
		continue;
}
return 0;
}
char * find(const char * pt1,const char * pt2,int n)
{
	int i;
	for(i=0;i<n;)
{
		if(*pt1!=*pt2)
		{
			pt2++;
		}
		else
		{
			pt1++;
			pt2++;
			i++;
		}
}
	return (char*)(pt2-i);
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

int is_within(char a,const char * pt)
{
	if(strchr(pt,a)!=NULL)
		return 1;
	else 
		return 0;
}
