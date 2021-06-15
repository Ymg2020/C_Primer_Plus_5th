#include <stdio.h>
#include <string.h>  // strcmp()函数的原型在该头文件中
#include <ctype.h>
#define ANSWER "grant"
#define SIZE 40
char * s_gets(char * st, int n);
int main(void)
{
char try[SIZE];
char cha;
int i=0;
puts("Who is buried in Grant's tomb?");
s_gets(try, SIZE);
while(*(try+i)!='\0')
{
	cha = tolower(*try);
	*try = cha;
	i++;
}
puts(try);
while (strcmp(try,ANSWER) != 0)
{
puts("No, that's wrong. Try again.");
s_gets(try, SIZE);
}
puts("That's right!");
return 0;
}
char * s_gets(char * st, int n)
{
char * ret_val;
int i = 0;
ret_val = fgets(st, n, stdin);
if (ret_val)
{
while (st[i] != '\n' && st[i] != '\0')
i++;
if (st[i] == '\n')
st[i] = '\0';
else
while (getchar() != '\n')
continue;
}
return ret_val;
}
