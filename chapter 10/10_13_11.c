#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void show_arr(int n,int m,int ar[n][m]);
void twice_arr(int n,int m,int ar[n][m]);
int main(void)
{
srand((unsigned)time(NULL));
printf("Please input the rows and cols you want:\n");
int rows,cols;
scanf("%d %d",&rows,&cols);
int ar[rows][cols];
for(int r=0;r<rows;r++)
{
	for(int c=0;c<cols;c++)
	{
		ar[r][c]=rand()%100;
	}
}
show_arr(rows,cols,ar);
twice_arr(rows,cols,ar);
show_arr(rows,cols,ar);
return 0;
}
void show_arr(int n,int m,int ar[n][m])
{
	for(int r=0;r<n;r++)
	{
		for(int c=0;c<m;c++)
		{
			printf("%5d",ar[r][c]);
		}
		printf("\n");
	}
}

void twice_arr(int n,int m,int ar[n][m])
{
	for(int r=0;r<n;r++)
	{
		for(int c=0;c<m;c++)
		{
			ar[r][c] *= 2;
		}
	}
}
