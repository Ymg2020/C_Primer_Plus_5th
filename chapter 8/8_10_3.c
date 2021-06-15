#include <stdio.h>
int main()
{
char ch;
int counter;
while((ch=getchar())!=EOF)
	counter++;
printf("There are %d character in this file.\n",counter);
return counter;
}
