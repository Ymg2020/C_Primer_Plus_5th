#include <stdio.h>
int main(void)
{
char ch;
int counter = 0;
while((ch=getchar())!=EOF)
	counter ++;
printf("There are %d characters in this file.\n",counter);
return 0;
//
}
