#include <stdio.h>
int main(void)
{
char last_ch,next_ch;
int counter = 0;
printf("Please input the sentence to be analyse!\n");
while((next_ch=getchar()) != '#')
{
if((last_ch=='e')&&(next_ch=='i'))
{
	counter ++;
}
last_ch = next_ch;
}
printf("There are %d ei in this sentence.\n",counter);
return 0;
}
