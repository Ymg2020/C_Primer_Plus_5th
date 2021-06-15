#include <stdio.h>
int main(int argc,char *argv[])
{
printf("The command has %d argument.",argc-1);
for(int count=argc;count>0;count--)
	printf("%s ",argv[count]);
puts("");
return 0;
}

