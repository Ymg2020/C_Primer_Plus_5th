#include <stdio.h>
void show_arry(int n,int m,double ar[n][m]);
void create_arry(int n,int m,double ar[n][m]);
double average_arry(int n,int m,double ar[n][m]);
double max_arry(int n,int m,double ar[n][m]);
int main(void)
{
int rows,cols;
double count = 0;
printf("Please input the rows and cols you want:\n");
scanf("%d %d",&rows,&cols);
double arry[rows][cols];
create_arry(rows,cols,arry);
show_arry(rows,cols,arry);
for(int i=0;i<rows;i++)
{	
	printf("The average of NO.%d rows is %lf\n",i+1,average_arry(i,cols,arry));
	count += average_arry(i,cols,arry);
}
printf("The average of arry is %lf\n",count/rows);
printf("The biggest number of this arry is %lf.\n",max_arry(rows,cols,arry));
return 0;
}

void create_arry(int n,int m,double ar[n][m])
{
double medium;
for(int r=0;r<n;r++)
{
	for(int c=0;c<m;c++)
	{
		printf("Input the number of NO.%d rows and NO.%d cols:",r+1,c+1);
		scanf("%lf",&medium);
		ar[r][c]=medium;
	}
}
}

double average_arry(int n,int m,double ar[n][m])
{
	double counter=0;
	for(int i=0;i<m;i++)
		counter += ar[n][i];
	return counter/m;
}
double max_arry(int n,int m,double ar[n][m])
{
	double counter=ar[0][0];
	for(int r=0;r<n;r++)
	{
		for(int c=0;c<m;c++)
		{
			if(counter<ar[r][c])
				counter=ar[r][c];
		}
	}
	return counter;
}

void show_arry(int n,int m,double ar[n][m])
{
for(int r=0;r<n;r++)
{
	for(int c=0;c<m;c++)
		printf("%lf",ar[r][c]);
	printf("\n");
}
}
