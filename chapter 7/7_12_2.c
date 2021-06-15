#include <stdio.h>
int main(void)
{
char ch;
int counter =0;
while((ch=getchar())!='#')
{
counter ++;
printf("%c-%d ",ch,ch);
if((counter%8)==0)
{
printf("\n");
}
}
return 0;
}
