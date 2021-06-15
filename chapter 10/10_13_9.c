#include <stdio.h>
#include <stdlib.h>
void copy_arr(int rows,int cols,double ar1[rows][cols],double ar2[rows][cols]);
void show_arr(int rows,int cols,double ar[rows][cols]);
int main(void)
{
double source[3][5];
for(int i=0;i<3;i++)
{
	for(int j=0;j<5;j++)
	{
		source[i][j]=rand()/(32757+0.0);
	}
}
double target[3][5];
copy_arr(3,5,source,target);
show_arr(3,5,source);
return 0;
}

void copy_arr(int rows,int cols,double ar1[rows][cols],double ar2[rows][cols])
{
	for(int r=0;r<rows;r++)
	{
		for(int c=0;c<cols;c++)
		{
			ar2[r][c]=ar1[r][c];
		}
	}
}
void show_arr(int rows,int cols,double ar[rows][cols])
{
	
	for(int r=0;r<rows;r++)
	{
		for(int c=0;c<cols;c++)
		{
			printf("%10lf",ar[r][c]);
		}
		printf("\n");
	}
}
