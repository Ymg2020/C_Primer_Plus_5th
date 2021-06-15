#include <stdio.h>
int main(void)
{

char ch;
while((ch = getchar()) != '#')
{
	if(ch != '\n'||ch == 'c')
		printf("step 1\n"); 
	if(ch =='b')
		break;
	else if(ch =='h')
		printf("step 3\n");
	else if(ch == 'q')
{           
	printf("step 2\n");
	printf("step 3\n");
}
}
printf("Done \n");
return 0;
}
