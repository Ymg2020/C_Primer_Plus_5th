/*该模块用于对数组进行处理*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void origin(char *strings [],int n);
void asc2_sort(char *strings [],int n);
void long_sort(char *strings [],int n);
void word_sort(char *strings [],int n);
int main(void)
{
char words[5][50];
strcpy(words[0],"If you miss the train I'm on");
strcpy(words[1],"You will know that I am gone");
strcpy(words[2],"You can hear the whistle blow a hundred miles");
strcpy(words[3],"A hundred miles, a hundred miles");
strcpy(words[4],"You can hear the whistle blow a hundred miles");
char *ptstr[5];
for(int ct=0;ct<5;ct++)
	ptstr[ct]=words[ct];
origin(ptstr,5);
asc2_sort(ptstr,5);
long_sort(ptstr,5);
word_sort(ptstr,5);
return 0;
}

void origin(char *strings [],int n)
{
	puts("源字符串列表：");
	for(int k=0;k<n;k++)
		puts(strings[k]);
}
void asc2_sort(char *strings [],int n)
{
	char * temp;
	char *copy[5];
	for(int coun=0;coun<5;coun++)
		copy[coun]=strings[coun];
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(strcmp(copy[i],copy[j])>0)
			{
				temp = copy[i];
				copy[i]=copy[j];
				copy[j]=temp;
			}		
		}
	}
	puts("按照ASC2排序后的句子如下：");
	for(int k=0;k<5;k++)
		puts(copy[k]);
}
void long_sort(char *strings [],int n)
{
	char * temp;
	char *copy[5];
	for(int coun=0;coun<5;coun++)
		copy[coun]=strings[coun];
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(strlen(copy[i])>strlen(copy[j]))
			{
				temp = copy[i];
				copy[i]=copy[j];
				copy[j]=temp;
			}		
		}
	}
	puts("按照句子长度排序后的句子如下：");
	for(int k=0;k<5;k++)
		puts(copy[k]);
}
void word_sort(char *strings [],int n)
{
	char * temp;
	char *copy[5];
	for(int coun=0;coun<5;coun++)
		copy[coun]=strings[coun];
	int counter[5];
	for(int count = 0;count<5;count++)
	{
		int c=0,i=0;
		while(!isspace(copy[count][c]))
		{
			c++;
			i++;
		}
		counter[count]=i;
	}
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(counter[i]>counter[j])
			{
				temp = copy[i];
				copy[i]=copy[j];
				copy[j]=temp;
			}		
		}
	}
	puts("按照首个单词长度排序后的句子如下：");
	for(int k=0;k<5;k++)
		puts(copy[k]);
}
