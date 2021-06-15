#include <stdio.h>
#include <string.h>
#define STRLEN 50
char * s_gets(char * st,int n);
char * find(const char * pt1,const char * pt2,int n);
int main(void)
{
char words1[STRLEN] = "Where are you? Ymg.You are beautiful.";
char words2[STRLEN];
puts("Please input the words you want to find?");
s_gets(words2,STRLEN);
char * pt = words2;
printf("The words have %u character and the location of it is:\n",strlen(pt));
puts(find(words2,words1,strlen(pt)));
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

