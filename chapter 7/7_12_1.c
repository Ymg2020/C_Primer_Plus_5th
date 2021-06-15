#include <stdio.h>
int main(void)
{
char ch;
int period = 0;
int next = 0;
int other = 0;
printf("Please input a setence:\n");
while((ch=getchar())!='#')
{
	
	if(ch==' ')
		period ++;
	else if(ch == '\n')
		next ++;
	else	
		other ++;
}
printf("There are %d period and %d next and %d other words",period,next,other);
return 0;
}
