#include <stdio.h>
int main(void)
{
char ch;
int counter;
while((ch=getchar())!='#')
{
	if(ch=='.')
		{printf("!");
		counter++;}
	else
		printf("%c",ch);
}
printf("\nThere are %d paste.\n",counter);
return 0;
}
