#include <stdio.h>
int main(void)
{
char a[32];
printf("请输入一句话：\n");
for(int i=0;i<=32;i++)
{
scanf("%c",&a[i]);
}
for(int j=32;j>=0;j--)
{
printf("%c",a[j]);
}
return 0;
}
