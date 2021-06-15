#include <stdio.h>
int main(void)
{
char ch;
int counter;
while((ch=getchar())!='#')
{
	switch(ch)
		case '.':{printf("!");counter++}
		default :printf("%c",ch);
}
printf("\nThere are %d paste.\n",counter);
return 0;
}
