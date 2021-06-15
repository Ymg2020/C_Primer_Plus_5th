#include <stdio.h>
int main(void)
{
char character[26];
for(int i=0;i<=25;i++)
	character[i]=97+i;
for(int j=0;j<=25;j++)
	printf("%c\n",character[j]);
return 0;
}
