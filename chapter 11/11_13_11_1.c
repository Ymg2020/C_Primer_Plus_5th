/*这个模块用于显示菜单并且获取选项*/
#include <stdio.h>
#include <string.h>
int show_title(void);
int main(void)
{
while(show_title()!=5)
{
printf("%d",show_title());
}
return 0;
}

int show_title(void)
{
	puts("""""""""""""""""""""""""""""""""""""""""""""""""");
        puts("          选项1：打印源字符串");
        puts("          选项2：以ASC2顺序打印");
        puts("          选项3：按长度递增打印");
        puts("          选项4：按字符串中第一个单词的长度打印");
        puts("          选项5：退出");
        puts("          请输入：");
        puts("""""""""""""""""""""""""""""""""""""""""""""""""");
	int choice;
	scanf("%d",&choice);
	while(getchar()!='\n')
		continue;
	return choice;	
}
