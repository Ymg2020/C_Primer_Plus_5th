#include <stdio.h>
void paint(char ch,int i,int j);
int main(void)
{
char cha;
int line,row;
printf("Please input a char and line row to paint:\n");
scanf("%c %d %d",&cha,&line,&row);
paint(cha,line,row);
return 0;
}

void paint(char ch,int i,int j)
{
	int line,row;
	for(line=1;line<=j;line++)
	{
		for(row=1;row<=i;row++)
		{
			printf("%c",ch);		
		}
		printf("\n");
	}
}
