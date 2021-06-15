#include <stdio.h>
#define PERIOD ','
int main(void)
{
	char ch;
	int counter = 0;
	ch = getchar();
	while(ch != PERIOD)
	{
		if(ch!='"'&&ch!='\'')
			counter += 1;
		ch=getchar();
	}
	printf("There are %d character in this setence.",counter);
	return 0;
}
