#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12_9_7.h"

int main(void)
{
	int dice,roll;
	int set;
	int sides;
	int status;

	srand((unsigned int)time(NULL));
	puts("Enter the number of sets;enter q to stop.");
	while(scanf("%d",&set)==1&&set>0)
	{
		puts("How many sides and dices?");
		scanf("%d %d",&sides,&dice);
		printf("Here are %d sets of %d %d-sided throws.\n",set,dice,sides);
		for(int i=0;i<set;i++)
		{
			roll = roll_n_dice(dice,sides);
			printf("%5d",roll);
		}
	printf("\n");
	puts("Enter the number of sets;enter q to stop.");
	
}
	return 0;
}
