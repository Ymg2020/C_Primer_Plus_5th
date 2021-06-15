#include <stdio.h>
int main(void)
{
int guess1 = 50;
int guess2 = 100;
int guess3 = 0;
int counter = 1;
char ch;
printf("Pick an integer from 1 to 100,i will try to guess.\n");
printf("input b or s to tell me the number i guess is bigger or smaller.\n");
printf("\nan n if it is wrong.\n");
printf("Is your number %d?\n",guess1);
while((ch=getchar())!='y')
{	
	counter ++;
	if(ch == 'b')
		guess1 = (guess1+guess2)/2;
	else if(ch == 's')
		guess1 = (guess1+guess3)/2;
	else
		printf("I can only recongnize b or s or y,please reinput.\n");
	guess2 = guess1 + 50/counter;
	guess3 = guess1 - 50/counter;
	printf("Is your number %d?\n",guess1);
	while(getchar()!='\n')
		continue;
}
printf("I kown I could do it.!\n");
return 0;
}
