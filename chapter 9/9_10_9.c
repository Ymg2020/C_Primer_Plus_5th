#include <stdio.h>
void title(void);
int choice(int a,int b);
int main()
{
title();
int ch;
while((ch=choice(1,3))!=4)
{
switch (ch)
{
case 1:printf("copy file\n");break;
case 2:printf("move file\n");break;
case 3:printf("remove file\n");break;
case 4:printf("Bye!");break;
}
title();
}
return 0;
}

void title(void)
{
printf("Please choose one of the following:\n");
printf("1) copy file		2) move file\n");
printf("3) remove file		4) quit\n");
printf("Enter the number of your choice:\n");
}

int choice(int a,int b)
{
int number;
if(scanf("%d",&number))
	if((number>=a)&&(number<=b))
		return number;
	else 
		;
else
	return 4;

}
